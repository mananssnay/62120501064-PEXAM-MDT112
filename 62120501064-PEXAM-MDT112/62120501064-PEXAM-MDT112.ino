#include <Stepper.h>
#define BUZZER 8

const int stepPin = 3;
const int dirPin = 4;


#include "TM1637.h"
const int CLK = 17;
const int DIO = 16;

TM1637 sevenSegment(CLK, DIO);


void setup(){

      Serial.begin(9600);
      

      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);


      pinMode(BUZZER,OUTPUT); 

      tone(8,900,600); 
     
      delay(100);

       Serial.println("Hello MDT");
       delay(100);

        sevenSegment.init();
        sevenSegment.set(7);
        sevenSegment.displayNum(0000);
         delay(800);

    }




void loop(){
  
     
       digitalWrite(dirPin,HIGH);
       for(int x=0; x<=360; x++)
       {
        digitalWrite(stepPin,HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin,LOW);
        delayMicroseconds(500);
        }

         Serial.println("Step CW 360  Degrees");
         delay(900);

    for(int x=360; x>=0; x--)
        {
        digitalWrite(stepPin,HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin,LOW);
        delayMicroseconds(500);
       }
        Serial.println("Step CCW 360  Degrees");
        delay(800);

    

}