#include <Debug.h>
#include <DEV_Config.h>
#include <EPD.h>
#include <EPD_SDCard.h>
#include <fonts.h>
#include <GUI_Paint.h>
#include <SPI_RAM.h>
#define delaytime 20000  //换照片时间为25S
long number;
void setup() {
 DEV_Module_Init();
 EPD_7IN5BC_Init();
  EPD_7IN5BC_Clear();
  DEV_Delay_ms(500);
    SDCard_Init();//以上为初始化，请勿改动

    randomSeed(analogRead(A0)); 
    
    }
void loop(){
    number=random(1,193);
  switch (number) {
    case 1:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("1.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

   case 2:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("2.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;
        
        case 3:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("3.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 4:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("4.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 5:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("5.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 6:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("6.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 7:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("7.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 8:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("8.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 9:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("9.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 10:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("10.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 11:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("11.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 12:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("12.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 13:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("13.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 14:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("14.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 15:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("15.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 16:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("16.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 17:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("17.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 18:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("18.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 19:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("19.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 20:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("20.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

            case 21:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("21.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 22:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("22.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 23:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("23.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 24:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("24.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 25:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("25.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 26:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("26.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 27:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("27.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 28:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("28.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 29:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("29.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 30:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("230.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 31:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("31.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 32:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("32.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 33:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("33.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 34:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("34.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;/*

         case 35:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("35.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 36:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("36.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 37:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("37.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 38:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("38.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 39:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("39.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 40:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("40.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 41:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("41.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 42:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("42.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 43:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("43.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 44:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("44.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 45:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("45.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 46:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("46.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 47:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("47.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 48:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("48.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 49:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("49.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 50:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("50.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 51:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("51.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 52:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("52.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 53:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("53.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 54:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("54.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 55:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("55.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 56:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("56.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 57:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("57.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 58:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("58.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 59:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("59.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 60:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("60.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 61:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("61.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 62:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("62.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 63:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("63.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 64:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("64.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 65:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("65.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 66:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("66.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 67:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("67.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 68:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("68.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 69:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("69.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 70:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("70.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 71:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("71.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 72:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("72.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 73:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("73.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 74:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("74.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 75:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("75.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 76:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("76.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 77:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("77.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 78:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("78.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 79:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("79.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 80:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("80.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 81:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("81.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 82:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("82.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 83:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("83.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 84:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("84.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 85:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("85.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 86:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("86.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 87:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("87.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 88:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("88.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 89:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("89.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 90:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("90.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 91:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("91.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 92:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("92.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 93:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("93.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 94:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("94.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 95:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("95.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 96:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("96.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 97:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("97.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 98:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("98.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 99:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("99.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 100:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("100.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 101:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("101.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 102:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("102.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 103:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("103.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 104:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("104.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 105:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("105.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 106:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("106.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 107:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("107.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 108:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("108.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 109:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("109.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 110:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("110.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 111:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("111.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 112:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("112.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 113:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("113.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 114:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("114.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 115:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("115.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 116:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("116.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 117:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("117.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 118:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("118.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 119:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("119.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 120:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("120.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 121:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("121.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 122:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("122.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 123:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("123.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 124:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("124.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 125:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("125.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 126:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("126.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 127:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("127.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 128:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("128.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 129:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("129.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 130:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("130.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 131:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("131.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 132:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("132.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 133:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("133.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 134:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("134.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 135:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("135.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 136:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("136.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 137:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("137.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 138:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("138.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 139:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("139.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 140:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("140.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 141:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("141.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


case 142:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("142.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 143:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("143.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 144:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("144.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 145:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("145.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 146:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("146.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 147:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("147.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 148:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("148.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 149:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("149.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 150:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("150.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 151:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("151.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 152:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("152.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 153:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("153.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 154:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("154.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 155:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("155.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 156:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("156.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 157:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("157.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 158:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("158.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 159:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("159.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 160:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("160.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 161:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("161.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 162:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("162.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 163:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("163.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 164:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("164.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 165:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("165.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 166:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("166.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 167:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("167.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 168:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("168.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 169:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("169.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 170:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("170.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 171:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("171.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 172:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("172.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 173:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("173.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

        case 174:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("174.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;

         case 175:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("175.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 176:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("176.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;



 case 177:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("177.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 178:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("178.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 179:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("179.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 180:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("180.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 181:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("181.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 182:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("182.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 183:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("183.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 184:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("184.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 185:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("185.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 186:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("186.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 187:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("187.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 188:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("188.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 189:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("189.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 190:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("190.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 191:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("191.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 192:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("192.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;


 case 193:
        Paint_NewImage(IMAGE_BW, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_INVERTED);
    Paint_Clear(WHITE);
    SDCard_ReadBMP("193.bmp", 0, 0);
    EPD_7IN5_Display();
    DEV_Delay_ms(delaytime);
        break;*/



        
   }
}
