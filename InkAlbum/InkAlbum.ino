#include "EPD.h"
#include "GUI_Paint.h"
#include "EPD_SDCard.h"

#define delaytime 3000
long number;
void setup() {
 DEBUG("7.5inch e-Paper B and C demo\r\n");
 DEV_Module_Init();
  Serial.begin(9600);
  EPD_7IN5BC_Init();
  // EPD_7IN5BC_Clear();
  DEV_Delay_ms(300);
  SDCard_Init(); 
//上述均为初始化

  Serial.print("Init Successfully\r\n");
  DEBUG("IMAGE_BW\n");
  Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
  Paint_Clear(WHITE);
  SDCard_ReadBMP("1.bmp", 0, 0);
  EPD_7IN5BC_Display();
  Serial.print("Showing the first picture done");
  DEV_Delay_ms(3000);
  Serial.print("after delay time");

//展示第一张图片

  randomSeed(analogRead(A0)); //获取随机数种子，因为A0会读取电压信号，其会受到噪声干扰，产生随机性。
  Serial.print("generate random seed done");
}

void loop() 
{
  number=random(1,5); //根据随机数种子，安排序列。由于先前获取的随机数种子在每次开始时候都不一样，所以能够用random实现随机数列效果。
  switch(number)
  {
    case 1:
      Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
      Paint_Clear(WHITE);
      SDCard_ReadBMP("1.bmp", 0, 0);
      EPD_7IN5BC_Display();
      DEV_Delay_ms(delaytime);
      Serial.print("1.bmp shown\r\n");
      break;
    case 2:
      Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
      Paint_Clear(WHITE);
      SDCard_ReadBMP("2.bmp", 0, 0);
      EPD_7IN5BC_Display();
      DEV_Delay_ms(delaytime);
      Serial.print("2.bmp shown\r\n");
      break;
    case 3:
      Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
      Paint_Clear(WHITE);
      SDCard_ReadBMP("3.bmp", 0, 0);
      EPD_7IN5BC_Display();
      DEV_Delay_ms(delaytime);
      Serial.print("3.bmp shown\r\n");
      break;
    case 4:
      Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
      Paint_Clear(WHITE);
      SDCard_ReadBMP("4.bmp", 0, 0);
      EPD_7IN5BC_Display();
      DEV_Delay_ms(delaytime);
      Serial.print("4.bmp shown\r\n");
      break;
    case 5:
      Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
      Paint_Clear(WHITE);
      SDCard_ReadBMP("5.bmp", 0, 0);
      EPD_7IN5BC_Display();
      DEV_Delay_ms(delaytime);
      Serial.print("5.bmp shown\r\n");
      break;
  }



}
