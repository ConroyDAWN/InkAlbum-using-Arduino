#include "EPD.h"
#include "GUI_Paint.h"
#include "EPD_SDCard.h"

void setup() {
 DEBUG("7.5inch e-Paper B and C demo\r\n");
 DEV_Module_Init();
  Serial.begin(9600);
  EPD_7IN5BC_Init();
  EPD_7IN5BC_Clear();
  DEV_Delay_ms(300);

#if 0
    Serial.print("000 \r\n");
      /*show sd card pic*/
    //1.Initialize the SD card
    SDCard_Init();
    Serial.print("000 successful SDcard \r\n");
    //2.Create a new image cache named IMAGE_BW and fill it with white
    //Draw black picture
    DEBUG("IMAGE_BW\n");
    Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    //3.Read BMP pictures into RAM
    SDCard_ReadBMP("7.bmp", 0, 0);

    //Draw red picture
    DEBUG("IMAGE_BWR\n");
    Paint_NewImage(IMAGE_BWR, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("1.bmp", 0, 0);

    //4.Refresh the picture in RAM to e-Paper
    EPD_7IN5BC_Display();
    DEV_Delay_ms(2000);
#endif

#if 1
    Serial.print("111 \r\n");
      /*show sd card pic*/
    //1.Initialize the SD card
    SDCard_Init();
    Serial.print("111 successful SDcard \r\n");
    //2.Create a new image cache named IMAGE_BW and fill it with white
    //Draw black picture
    DEBUG("IMAGE_BW\n");
    Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    //3.Read BMP pictures into RAM
    SDCard_ReadBMP("7.bmp", 0, 0);

    //Draw red picture
    DEBUG("IMAGE_BWR\n");
    Paint_NewImage(IMAGE_BWR, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("1.bmp", 0, 0);

    //4.Refresh the picture in RAM to e-Paper
    EPD_7IN5BC_Display();
    DEV_Delay_ms(2000);
#endif
    Serial.print("else else else \r\n");
      /*show sd card pic*/
    //1.Initialize the SD card
    SDCard_Init();
    Serial.print("e l s e    successful SDcard \r\n");
    //2.Create a new image cache named IMAGE_BW and fill it with white
    //Draw black picture
    DEBUG("IMAGE_BW\n");
    Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    //3.Read BMP pictures into RAM
    SDCard_ReadBMP("21.bmp", 0, 0);

    //Draw red picture
    DEBUG("IMAGE_BWR\n");
    Paint_NewImage(IMAGE_BWR, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("15.bmp", 0, 0);

    //4.Refresh the picture in RAM to e-Paper
    EPD_7IN5BC_Display();
    DEV_Delay_ms(2000);
}

void loop() {

}
