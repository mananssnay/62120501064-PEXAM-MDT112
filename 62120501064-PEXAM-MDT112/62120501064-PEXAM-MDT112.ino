#define BUZZER 8
const int stepPin = 3;
const int dirPin = 4;


void setup(){

      Serial.begin(9600);
      

      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);


      pinMode(BUZZER,OUTPUT); //เสียง

      tone(8,900,600); //เสียงที่1
     
      delay(100);

       Serial.println("Hello MDT");
       delay(100);
}




void loop(){
    digitalWrite(dirPin,HIGH);
    for(int x=0; x<200; x++){
        digitalWrite(stepPin,HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin,LOW);
        delayMicroseconds(500);
    }

    Serial.println("Step CW 360 Degrees");
    delay(900);

}
