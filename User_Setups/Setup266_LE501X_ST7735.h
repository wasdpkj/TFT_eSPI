// Setup for the ESP32 S2 with ST7735 80x160 display
// See SetupX_Template.h for all options available

#define USER_SETUP_ID 266

#define ST7735_DRIVER

// #define TFT_SDA_READ // Display has a bidirectional SDA pin (no MISO)

#define TFT_WIDTH  128
#define TFT_HEIGHT 160



// #define ST7735_INITB
// #define ST7735_GREENTAB
// #define ST7735_GREENTAB2
//  #define ST7735_GREENTAB3
// #define ST7735_GREENTAB128    // For 128 x 128 display
// #define ST7735_GREENTAB160x80 // For 160 x 80 display (BGR, inverted, 26 offset)
#define ST7735_REDTAB
//#define ST7735_BLACKTAB
// #define ST7735_REDTAB160x80   // For 160 x 80 display with 24 pixel offset

//#define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
// #define TFT_RGB_ORDER TFT_BGR  // Colour order Blue-Green-Red


#define TFT_INVERSION_ON
// #define TFT_INVERSION_OFF

                    // Typical board default pins
#define TFT_CS   PC00 //     10 or 34

#define TFT_MOSI PA06 //     11 or 35
#define TFT_SCLK PC01 //     12 or 36

#define TFT_DC   PA07
#define TFT_RST  PA08

#define TFT_BL  PA09

#define TFT_BACKLIGHT_ON	HIGH

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

// FSPI port must be used for SDA reads. Do not use #define USE_HSPI_PORT

#define SUPPORT_TRANSACTIONS
#define TFT_SPI_MODE SPI_MODE0
#define USE_SSI_PORT

#if defined(USE_SSI_PORT)
#define SPI_FREQUENCY   SSI_MAX_FREQ   //SSI_MAX_FREQ
#else
#define SPI_FREQUENCY   SPI_MAX_FREQ   //SPI_MAX_FREQ
#endif
