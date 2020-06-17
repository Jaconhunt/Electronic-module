//Viral Science  www.viralsciencecreativity.com  www.youtube.com/c/viralscience
//LED 8x8 Matrix Display DEMO

#include <LedControl.h>
int DIN = 10;
int CS =  9;
int CLK = 8;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       
 lc.setIntensity(0,15);      //Adjust the brightness maximum is 15
 lc.clearDisplay(0);    
}

void loop(){ 
    
    //Facial Expression
    byte smile[8]=   {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
    byte neutral[8]= {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};
    byte sad[8]=   {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};
   
    //Arrow
    byte arrow_up[8]= {0x18,0x3C,0x7E,0xFF,0x18,0x18,0x18,0x18};
    byte arrow_down[8]= {0x18,0x18,0x18,0x18,0xFF,0x7E,0x3C,0x18};
   
    
    //Alternate Pattern
    byte d1[8]= {0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55};
    byte d2[8]= {0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA};
    
    //Moving car
    byte b1[8]= {0x00,0x00,0x00,0x00,0x18,0x3C,0x18,0x3C};
    byte b2[8]= {0x00,0x00,0x00,0x18,0x3C,0x18,0x3C,0x00};
    byte b3[8]= {0x00,0x00,0x18,0x3C,0x18,0x3C,0x00,0x00};
    byte b4[8]= {0x00,0x18,0x3C,0x18,0x3C,0x00,0x00,0x00};
    byte b5[8]= {0x18,0x3C,0x18,0x3C,0x00,0x00,0x00,0x00};
    byte b6[8]= {0x3C,0x18,0x3C,0x00,0x00,0x00,0x00,0x18};
    byte b7[8]= {0x18,0x3C,0x00,0x00,0x00,0x00,0x18,0x3C};
    byte b8[8]= {0x3C,0x00,0x00,0x00,0x00,0x18,0x3C,0x18};


//Moving car
    printByte(b1);
    delay(50);
    printByte(b2);
    delay(50);
    printByte(b3);
    delay(50);
    printByte(b4);
    delay(50);
    printByte(b5);
    delay(50);
    printByte(b6);
    delay(50);
    printByte(b7);
    delay(50);
    printByte(b8);
    delay(50);

//alternate pattern
    printByte(d1);
    delay(100);

    printByte(d2);
    delay(100);

//Arrow
    printByte(arrow_up);
    delay(2000);

    printByte(arrow_down);
    delay(2000);

   
//Facial Expression   
    printByte(smile);
     
    delay(1000);

    printByte(neutral);
    
    delay(1000);

    printByte(sad);    

    delay(1000);
   
 
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
