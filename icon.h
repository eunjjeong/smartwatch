
const uint8_t cloud[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x3F, 
  0x00, 0x00, 0x00, 0xC0, 0x3F, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x0F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF8, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFE, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x80, 0x3F, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, };

  const uint8_t sun[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x01, 0x06, 0x00, 0x00, 0x00, 0x80, 
  0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC3, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x01, 0x00, 0x00, 
  0x1C, 0xE0, 0x1F, 0x70, 0x00, 0x00, 0x00, 0x70, 0xF0, 0x7F, 0x3C, 0x00, 
  0x00, 0x00, 0xE0, 0xFC, 0x7F, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x00, 0x00, 
  0x80, 0x1B, 0xFF, 0xFF, 0xF3, 0x0F, 0x00, 0xC0, 0x3F, 0xFE, 0xFF, 0xE3, 
  0x06, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFC, 0xFF, 0x1C, 0x00, 
  0x00, 0x00, 0xF0, 0xF0, 0x3F, 0x38, 0x00, 0x00, 0x00, 0x38, 0xE0, 0x1F, 
  0xE0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x01, 0xC0, 0x03, 0x00, 0x00, 0x06, 
  0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0C, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x83, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x02, 0x06, 0x00, 0x00, 0x00, 0x80, 0x03, 0x03, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, };

  const uint8_t cloud_sun[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x04, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x88, 0x3F, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0xD8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0xFF, 0x43, 0x00, 0x00, 0x00, 0x98, 0xCB, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0xC0, 0x9F, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xF0, 
  0x7F, 0xC1, 0x03, 0x00, 0x00, 0x00, 0xF8, 0x7F, 0x18, 0x01, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0x3F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xE0, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 
  0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, };
  
  const uint8_t rain[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xF1, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x03, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x80, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x80, 0x07, 0xE0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x07, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3F, 0xC0, 0x0F, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 
  0xC0, 0x0F, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE6, 0x8F, 
  0xF1, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC6, 0x87, 0xF1, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x87, 0xC3, 0xE1, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x0F, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x0F, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x1F, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0xF0, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0xE0, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 0xC0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };

  const uint8_t cloud_t[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFC, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0xA0, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x03, 
  0x00, 0x00, 0x00, 0xFE, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
  0x1F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0xFF, 0x03, 0x1E, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xC1, 0x7F, 0x00, 
  0x00, 0xC0, 0xFF, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0xE0, 0xFF, 0x01, 0xF8, 
  0xFF, 0x03, 0x00, 0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0xFE, 0x7F, 
  0xF0, 0xFF, 0xFF, 0x07, 0x00, 0xFE, 0x7F, 0xF8, 0xFF, 0xFF, 0x07, 0x00, 
  0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x07, 0x00, 0xFF, 0x1F, 0xFE, 0xFF, 0xFF, 
  0x0F, 0x00, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFF, 0x07, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFE, 
  0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x01, 0x78, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x60, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFC, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, };

  const uint8_t thunder[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x1F, 
  0xFC, 0x03, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x3F, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xF8, 0x07, 0x00, 0x00, 0x40, 0xF8, 0xFF, 0xFF, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 
  0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x1E, 0x00, 0x00, 
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x80, 0x07, 0xF0, 
  0x01, 0x1F, 0x00, 0x00, 0x00, 0x80, 0x07, 0xF0, 0x00, 0x0E, 0x00, 0x00, 
  0x00, 0xC0, 0x03, 0xF0, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x80, 0x0F, 0xF8, 
  0x00, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x70, 0x00, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0x07, 0xF8, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x06, 0xF8, 
  0x01, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x60, 
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x60, 0x00, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, };

  const uint8_t snow[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xD1, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0xFF, 0xF9, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0x1F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x07, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF0, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x07, 0x00, 0x00, 0x80, 0x7F, 0x7F, 0xFB, 0xBE, 0xFF, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x00, 0x1C, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 
  0x00, 0x3C, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x3E, 0x80, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x7E, 0x80, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x78, 0x00, 0x3E, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x7C, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };

  const uint8_t fog[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x84, 
  0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0xE0, 0x7F, 0xFE, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0xF9, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0xF7, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x4F, 0xFF, 0xFF, 0x00, 
  0x00, 0x80, 0xCF, 0xFF, 0x9F, 0xF0, 0xFF, 0x01, 0x00, 0xC0, 0xF3, 0xFF, 
  0xFF, 0xCF, 0xFF, 0x01, 0x00, 0xC0, 0xF9, 0xFF, 0xFF, 0xBF, 0xFF, 0x01, 
  0x00, 0xE0, 0xFD, 0xFF, 0xFF, 0x7F, 0xFF, 0x01, 0x00, 0xE0, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFC, 0x01, 0x00, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFD, 0x01, 
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFB, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x37, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x07, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x07, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0x03, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xF9, 0xFF, 0x01, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0x01, 0x00, 
  0xC0, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFE, 0xF1, 0xFF, 0xFE, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x17, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5A, 0xAA, 0x5A, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8A, 0x62, 
  0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x12, 0x92, 0x04, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x60, 0xD9, 0x6A, 0x05, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };