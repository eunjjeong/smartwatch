#include <Adafruit_NeoPixel.h>
#include <WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>
#include <HTTPClient.h>
#include <Wire.h>
#include "SH1106.h" 
#include "icon.h"

//PIN번호
#define BUTTON_PRESS   18   
#define BUTTON_LEFT    5                          
#define BUTTON_RIGHT   19                                                 
#define PIXEL_PIN    33    // Digital IO pin connected to the NeoPixels.
#define PIXEL_COUNT 1
#define BUZZER 32
#define BUTTON_ON 22
#define BUTTON_OFF 23
#define FLASHLIGHT 27

const char *ssid = "iptime";
const char *password = "";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

String formattedDate;
String dayStamp;
String timeStamp;
 
SH1106  display(0x3c,17,16);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool oldState = HIGH;
int showType = 0;
int b_sound=40;

void setup() {

  digitalWrite(FLASHLIGHT,HIGH);
  display.init();
  display.flipScreenVertically();

  //pin 모드 설정
  pinMode(BUTTON_PRESS, INPUT_PULLUP);
  pinMode(BUTTON_LEFT, INPUT_PULLUP);
  pinMode(BUTTON_RIGHT, INPUT_PULLUP);
  pinMode(BUTTON_ON, INPUT_PULLUP);
  pinMode(BUTTON_OFF, INPUT_PULLUP);
  pinMode(BUZZER,OUTPUT);
  pinMode(FLASHLIGHT,OUTPUT);

  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  //WiFi 연결
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  //digital watch
  timeClient.begin();    // NTP 클라이언트 초기화  
  timeClient.setTimeOffset(32400);  // 한국은 GMT+9이므로 9*3600=32400 + 60
 
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  //버튼소리
  botton_sound(b_sound);
  colorWipe(strip.Color(0,0,0), 50);
  colorWipe(strip.Color(0,0,0), 50);
}

 

void loop() { 
   while(!timeClient.update()) {
    timeClient.forceUpdate();
  }

  formattedDate = timeClient.getFormattedDate();
  int splitT = formattedDate.indexOf("T");
  Serial.println(formattedDate);
  
  display.clear();
  
  dayStamp = formattedDate.substring(0, splitT);    
  display.setFont(ArialMT_Plain_10);
  delay(10);
  display.drawString( 0, 12,dayStamp);

  timeStamp = formattedDate.substring(splitT+1, formattedDate.length()-1);  
  display.setFont(ArialMT_Plain_24);
  delay(10);
  display.drawString( 15, 26, timeStamp);
  
  display.display();

  delay(50);

  // 윗 버튼 (날씨)
  if(digitalRead(BUTTON_ON)==LOW)
  {     
    botton_sound(b_sound);
     
     HTTPClient httpClient;

     String host = "http://api.openweathermap.org";
     String url = "/data/2.5/weather?q=Daegu&APPID=";
     String key = "0def754999df48a0e11fec0d9ffedb77";

    httpClient.begin(host + url + key);
    int httpCode = httpClient.GET();
    
    if(httpCode > 0){
    Serial.printf("[HTTP] request from the client was handled : %d\n", httpCode);

    if(httpCode == HTTP_CODE_OK){
      String payload = httpClient.getString();
      processWeatherInformation(payload);
      }
      delay(5000);
    }
    
    else {
    Serial.printf("[HTTP] connection failed : %s\n", httpClient.errorToString(httpCode).c_str());
    } 
  }

  // 왼쪽 아래 버튼 눌렀을 때 대기화면 (OFF KEY)
  if(digitalRead(BUTTON_OFF)==LOW)
  {
    botton_sound(b_sound);
    while(1)
    {
      display.clear();
      display.display();
      if(digitalRead(BUTTON_ON)==LOW){botton_sound(b_sound);break;}
      if(digitalRead(BUTTON_OFF)==LOW){botton_sound(b_sound);break;}
      if(digitalRead(BUTTON_PRESS)==LOW){botton_sound(b_sound);break;}
      if(digitalRead(BUTTON_LEFT)==LOW){botton_sound(b_sound);break;}
      if(digitalRead(BUTTON_RIGHT)==LOW){botton_sound(b_sound);break;}
    }
  }

  // 오른쪽 버튼 누를때 메뉴화면
  if(digitalRead(BUTTON_PRESS)==LOW)
  {
    botton_sound(b_sound);
    menu();
  }
}

//날씨
  void processWeatherInformation(String buffer){
  int index1, index2, index3, index4;
  String fieldInfo;
  String temper;
  char *key1 = "\"weather\"", *key2 = "\"main\"", *key3 = "\"temp\"", *key4 = "\"icon\"", *key5 = "\"humidity\"";

  //weather.main 필드
  index1 = buffer.indexOf(key1);
  index2 = buffer.indexOf(key2, index1);
  index1 = buffer.indexOf('\"', index2 + strlen(key2));
  index2 = buffer.indexOf('\"', index1 + 1);

  fieldInfo = buffer.substring(index1 + 1, index2);

  display.clear();
  display.setFont(ArialMT_Plain_24);
  display.drawString( 0, 0, fieldInfo);
  
  
  //main.temp 필드
  index1 = buffer.indexOf(key3, index2);
  index2 = buffer.indexOf(':', index1 + strlen(key3));
  index1 = buffer.indexOf(',', index2 + 1);

  fieldInfo = buffer.substring(index2 + 1, index1);
  float temperature = fieldInfo.toFloat() - 273.15; //섭씨온도로 변환
  temper = temperature;

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 25, temper + " C");

  //weather.icon 필드
  index3 = buffer.indexOf(key1); //weather
  index4 = buffer.indexOf(key4, index3); //icon
  index3 = buffer.indexOf('\"', index4 + strlen(key4));
  index4 = buffer.indexOf('\"', index3 + 1);

  fieldInfo = buffer.substring(index3 + 1, index4);
  //tft.println(fieldInfo);  

  if (fieldInfo == "01d" || fieldInfo == "01n") { //sun
    Sun();
  } else if (fieldInfo == "02d" || fieldInfo == "02n") { //sun+cloud
    Cloud_Sun();
  } else if (fieldInfo == "03d" || fieldInfo == "03n") { //cloud
    Cloud();
  } else if (fieldInfo == "04d" || fieldInfo == "04n") { //cloud+cloud
    Cloud_T(); 
  } else if (fieldInfo == "09d" || fieldInfo == "09n") { //rain
    Rain();
  } else if (fieldInfo == "10d" || fieldInfo == "10n") { //rain
    Rain();
  } else if (fieldInfo == "11d" || fieldInfo == "11n") { //thunder
    Thunder();
  } else if (fieldInfo == "13d" || fieldInfo == "13n") { //snow
    Snow();
  } else if (fieldInfo == "50d" || fieldInfo == "50n") { //fog
    Fog();
  } 

  //main.humidity 필드
  index1 = buffer.indexOf(key5, index2);
  index2 = buffer.indexOf(':', index1 + strlen(key5));
  index1 = buffer.indexOf(',', index2 + 1);

  fieldInfo = buffer.substring(index2 + 1, index1);

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 45, fieldInfo + "%");
  
display.display();
}

//weather icon draw ----------------------------------------------------------------
void Sun() //해
{
    display.drawXbm(70,10,50,50,sun);
}

void Cloud() //구름
{     
     display.drawXbm(70,15,50,50,cloud);
}

void Cloud_T() //구름+구름
{     
     display.drawXbm(70,15,50,50,cloud_t);
}

void Cloud_Sun() //해+구름
{     
     display.drawXbm(65,15,50,50,cloud_sun);
}

void Rain() //비
{     
     display.drawXbm(55,0,80,60,rain);
}

void Thunder() // thunder
{     
     display.drawXbm(65,0,60,65,thunder);
}

void Snow() // snow
{     
     display.drawXbm(65,5,69,60,snow);
}

void Fog() // fog
{     
     display.drawXbm(65,0,60,60,fog);
}

//스탑워치
void stopwatch()
{
    int h1=0;
    int h2=0;
    int m1=0;
    int m2=0;
    int s1=0;
    int s2=0;
    int ms1=0;
    int ms2=0;
   
    char stoptime[20];
    char ms[20];
    
    
    display_stopwatch(h1,h2,m1,m2,s1,s2,ms1,ms2);   
    while(1){
      if(digitalRead(BUTTON_ON)==LOW)
      {
        botton_sound(b_sound);
        int outsign=0; 
        while(1)
        {
          delay(10);
          ms2++;
          if(ms2==10)
          { ms1++; ms2=0;
            if(ms1==10)
            { s2++; ms1=0;
              if(s2==10)
              { s1++; s2=0;
                if(s1==6)
                { m2++; s1=0;
                  if(m2==10)
                  { m1++; m2=0;
                    if(m1==6)
                    { h2++; m1=0;
                      if(h2==10)
                      { h1++; h2=0; 
                      }}}}}}}  
          
        display_stopwatch(h1,h2,m1,m2,s1,s2,ms1,ms2);                          
       
        if(digitalRead(BUTTON_OFF)==LOW)
        {
            botton_sound(b_sound);            
            while(1)
            {
              if(digitalRead(BUTTON_ON)==LOW)
              {
                botton_sound(b_sound);                
                break;
              }
              if(digitalRead(BUTTON_OFF)==LOW)
              {
                botton_sound(b_sound);
                h1=0;
                h2=0;
                m1=0;
                m2=0;
                s1=0;
                s2=0;
                ms1=0;
                ms2=0;
                display_stopwatch(h1,h2,m1,m2,s1,s2,ms1,ms2);               
                outsign=1;                
                break;
              }
            }
        }
        if(outsign==1)break;
      }
      
    }
    
    if(digitalRead(BUTTON_OFF)==LOW)
    {
      botton_sound(b_sound);      
      return;
    }
  }
}

//스탑워치 출력
void display_stopwatch(int h1,int h2,int m1, int m2, int s1, int s2,int ms1,int ms2)
{
   char stoptime[20];
   char ms[20];
   
   display.clear();    
   sprintf(stoptime,"%d%d:%d%d:%d%d",h1,h2,m1,m2,s1,s2);
   sprintf(ms,"%d%d",ms1,ms2);
   display.setFont(ArialMT_Plain_24);            
   display.drawString( 18, 23, stoptime);
   display.setFont(ArialMT_Plain_10);
   display.drawString( 100, 50, ms);
   display.display(); 
}

//메뉴
void menu()
{
   int line=16;
   int outsign=0;
   while(1)
   {      
      display.clear();      
      display.setFont(ArialMT_Plain_16);
      display.drawString( 40,0, "MENU");
      display.drawString( 0,0, "_________________");
      display.setFont(ArialMT_Plain_10);
      display.drawString( 10,line, "l");
      display.drawString( 11,line, "l");
      display.drawString( 12,line, "l");              
      display.drawString( 18,16, "PEDOMETER");
      display.drawString( 18,26, "STOPWATCH");
      display.drawString( 18,36, "SETTING");
      display.drawString( 18,46, "OUT");      
      display.display();
      
       
      if(digitalRead(BUTTON_LEFT)==LOW)
      {
          botton_sound(b_sound);           
          line+=10;
          if(line>50)line-=10;
      }
      if(digitalRead(BUTTON_RIGHT)==LOW)
      {
          botton_sound(b_sound);
          line-=10;
          if(line<10)line+=10;
          
      }
      if(digitalRead(BUTTON_PRESS)==LOW)
      {
          botton_sound(b_sound);          
          switch(line)
          {
              case 16:
                    break;
              case 26:
                   stopwatch();
                   break;
              case 36:
                   outsign=menu_setting();
                   if(outsign==1)return;
                   break;
              case 46:
                  return;
          }
          
      }
      if(digitalRead(BUTTON_OFF)==LOW)
      {
        botton_sound(b_sound);
        return;
      }
   }
}

//메뉴 설정
int menu_setting()
{
   int line=16;
   int outsign=0;
   while(1)
   {
      
      display.clear();      
      display.setFont(ArialMT_Plain_16);
      display.drawString( 32,0, "SETTING");
      display.drawString( 0,0, "_________________");
      display.setFont(ArialMT_Plain_10);
      display.drawString( 10,line, "l");
      display.drawString( 11,line, "l");
      display.drawString( 12,line, "l");              
      display.drawString( 18,16, "LIGHT");
      display.drawString( 18,26, "BUTTONSOUND");
      display.drawString( 18,36, "BACK");      
      display.display();
      
      if(digitalRead(BUTTON_LEFT)==LOW)
      {
          botton_sound(b_sound); 
          line+=10;
          if(line>40)line-=10;
      }
      if(digitalRead(BUTTON_RIGHT)==LOW)
      {
          botton_sound(b_sound); 
          line-=10;
          if(line<10)line+=10;
      }
      if(digitalRead(BUTTON_PRESS)==LOW)
      {   
          botton_sound(b_sound);
          switch(line)
          {
              case 16:
                   outsign=light_setting();
                   if(outsign==1)return 1;
                   break;
              case 26:
                   outsign=sound_setting();
                   if(outsign==1)return 1;
                   break;
              case 36:
                   return 0;              
          }
          
      }
      
    if(digitalRead(BUTTON_OFF)==LOW)
    {
      botton_sound(b_sound);     
      return 1;
    }
   }
}

//버튼 음량 설정
int sound_setting()
{     
     while(1)
     {
        display.clear();
        display.setFont(ArialMT_Plain_16);
        display.drawString( 37,0, "SOUND");
        display.drawString( 0,0, "_________________");
        display.drawString( 31,35, "l");
        display.drawString( 33,32, "_______");
        display.drawString( 33,21, "_______");
        display.drawString( 95,35, "l");        
         int sound_bar=b_sound/20;
                  
         for(int i=0;i<sound_bar;i++)
         { 
            for(int j=0;j<5;j++)
            { 
              display.drawString( 34+j+(i*6),35, "l");              
            } 
         }
         display.display();
         if(digitalRead(BUTTON_LEFT)==LOW)
          {
            botton_sound(b_sound);
            b_sound-=20;
            if(b_sound<0)b_sound=0;
          }
         if(digitalRead(BUTTON_RIGHT)==LOW)
          {
            botton_sound(b_sound);
            b_sound+=20;            
            if(b_sound>200)b_sound=200;
          }
         if(digitalRead(BUTTON_PRESS)==LOW)
         {
            botton_sound(b_sound);
            break;
         }
         if(digitalRead(BUTTON_OFF)==LOW)
         {
            botton_sound(b_sound);
            return 1;
         }
     }
}

//버튼 소리 길이
void botton_sound(int bsound)
{
     int y=bsound;
     for(int i=0;i<y;i++)
     {         
        digitalWrite(BUZZER,HIGH);
        delay(1);                
        digitalWrite(BUZZER,LOW);
        delay(1);
     }
     delay(200);  
  
}

//빛 설정(전방 LED)
int light_setting()
{
   int line1=16;
   int line2=10;
   while(1)
   {   
      display.clear();      
      display.setFont(ArialMT_Plain_16);
      display.drawString( 40,0, "LIGHT");
      display.drawString( 0,0, "_________________");
      display.setFont(ArialMT_Plain_10);
      display.drawString( line2,line1, "l");
      display.drawString( line2+1,line1, "l");
      display.drawString( line2+2,line1, "l");              
      display.drawString( 68,16, "OFF");//76=16+66
      display.drawString( 68,26, "OUT");//86
      display.drawString( 18,16, "GREEN");//26
      display.drawString( 18,26, "RED");//36
      display.drawString( 18,36, "BLUE");//46   
      display.display();
      if(digitalRead(BUTTON_LEFT)==LOW)
      {
          botton_sound(b_sound); 
          line1+=10;
          if(line1>40 && line2==10)
          {
            line1=16;
            line2=60;
          }
          if(line1>30 && line2==60)
          {
            line1=16;
            line2=10;
          }
      }
      if(digitalRead(BUTTON_RIGHT)==LOW)
      {
          botton_sound(b_sound); 
          line1-=10;
          if(line1<10 && line2==10)
          {
            line1=26;
            line2=60;
          }
          if(line1<10 && line2==60)
          {
            line1=36;
            line2=10;
          }
      } 
      int linesum=line1+line2;
       if(digitalRead(BUTTON_PRESS)==LOW)
      {   
          botton_sound(b_sound);
          switch(linesum)
          {
              case 26:
                   colorWipe(strip.Color(0, 255, 0),0);//green
                   colorWipe(strip.Color(0, 255, 0),0);
                   break;
              case 36:
                   colorWipe(strip.Color(255, 0, 0), 0);//red                   
                   colorWipe(strip.Color(255, 0, 0), 0);
                   break;
              case 46:
                   colorWipe(strip.Color(0, 0, 255), 0);
                   colorWipe(strip.Color(0, 0, 255), 0);//blue
                   break;              
              case 76:
                   colorWipe(strip.Color(0, 0, 0), 0);//off
                   colorWipe(strip.Color(0,0,0), 0);
                   break;              
              case 86:
                   return 0;              
          }
          
      }
      
      if(digitalRead(BUTTON_OFF)==LOW)
      {
            botton_sound(b_sound);
            return 1;
           
      }
    }
}

void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
