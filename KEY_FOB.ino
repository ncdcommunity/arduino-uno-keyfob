#include <Wire.h>


int buttonD0 = 2;
int buttonD1 = 3;
int buttonD2 = 4;
int buttonD3 = 5;
int buttonD4 = 6;
int buttonD5 = 7;
int buttonD6 = 8;
int buttonD7 = 9;
 
//byte leds = 0;
 
void setup() 
{
  pinMode(13, OUTPUT);           // set pin to input
digitalWrite(13, LOW);       // turn on pullup resistors
  Serial.begin(9600);
  
  pinMode(buttonD0, INPUT);  
  pinMode(buttonD1, INPUT);  
  pinMode(buttonD2, INPUT);  
  pinMode(buttonD3, INPUT);  
  pinMode(buttonD4, INPUT);  
  pinMode(buttonD5, INPUT);  
  pinMode(buttonD6, INPUT);  
  pinMode(buttonD7, INPUT);  
}
 
void loop() 
{
  if (digitalRead(buttonD0) == HIGH)
  {
    Serial.println("D0 is HIGH");
  }
//  else
//  if(digitalRead(buttonD0) == LOW)
//  {
//    Serial.println("D0 is LOW");
//  }
if (digitalRead(buttonD1) == HIGH)
  {
    Serial.println("D1 is HIGH");
  }
//  else
//  if(digitalRead(buttonD1) == LOW)
//  {
//    Serial.println("D1 is LOW");
//  }
if (digitalRead(buttonD2) == HIGH)
  {
    Serial.println("D2 is HIGH");
  }
//  else
//  if(digitalRead(buttonD2) == LOW)
//  {
//    Serial.println("D2 is LOW");
//  }
if (digitalRead(buttonD3) == HIGH)
  {
    Serial.println("D3 is HIGH");
  }
//  else
//  if(digitalRead(buttonD3) == LOW)
//  {
//    Serial.println("D3 is LOW");
//  }
if (digitalRead(buttonD4) == HIGH)
  {
    Serial.println("D4 is HIGH");
  }
//  else
//  if(digitalRead(buttonD4) == LOW)
//  {
//    Serial.println("D4 is LOW");
//  }
if (digitalRead(buttonD5) == HIGH)
  {
    Serial.println("D5 is HIGH");
  }
//  else
//  if(digitalRead(buttonD5) == LOW)
//  {
//    Serial.println("D5 is LOW");
//  }
if (digitalRead(buttonD6) == HIGH)
  {
    Serial.println("D6 is HIGH");
  }
//  else
//  if(digitalRead(buttonD6) == LOW)
//  {
//    Serial.println("D6 is LOW");
//  }
if (digitalRead(buttonD7) == HIGH)
  {
    Serial.println("D7 is HIGH");
  }
//  else
//  if(digitalRead(buttonD7) == LOW)
//  {
//    Serial.println("D7 is LOW");
//  }
delay(300);
}
