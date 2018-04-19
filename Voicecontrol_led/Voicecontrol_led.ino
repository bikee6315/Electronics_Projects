#include <SoftwareSerial.h>
SoftwareSerial BLU(0,1);
String voice;
int RED=2;
int GREEN=3;
int BLUE=4;
void Redon(){
  digitalWrite(RED,HIGH);
}
void Redoff(){
  digitalWrite(RED,LOW);
  }
void Greenon(){
  digitalWrite(GREEN,HIGH);
  }
void Greenoff(){
  digitalWrite(GREEN,LOW);
  }
void Blueon(){
  digitalWrite(BLUE,HIGH);
  }
void Blueoff(){
  digitalWrite(BLUE,LOW);
  }
void allon(){
  digitalWrite(RED,HIGH);
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,HIGH);
  }
void alloff(){
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);
  }
void setup(){
  Serial.begin(38400);
  BLU.begin(38400);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  }
  void loop(){
    while(Serial.available()){
      delay(10);
      char c=Serial.read();
      if(c=='#'){
        break;
        }
        voice+=c;
      }
      if(voice.length()>0){
        Serial.println(voice);
        if(voice=="on" || voice=="allon")
        {
          allon();
        }
        else if(voice=="of" || voice=="allof")
        {
          alloff();
        }
        else if(voice=="red" || voice=="red on")
        {
          Redon();
        }
        else if(voice=="red of" || voice=="of red")
        {
          Redoff();
        }
        else if(voice=="green" || voice=="green on")
        {
          Greenon();
        }
        else if(voice=="green of" || voice=="of green")
        {
          Greenoff();
        }
        else if(voice=="blue" || voice=="blue on")
        {
          Blueon();
        }
        else if(voice=="blue of" || voice=="of blue")
        {
          Blueoff();
        }
        voice="";
        }
    }






  
