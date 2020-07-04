#define BUZZER 8

void setup(){

      Serial.begin(9600);
      

      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);


      pinMode(BUZZER,OUTPUT); //เสียง

      tone(8,900,600); //เสียงที่1
     
      delay(100);
}

void loop(){}