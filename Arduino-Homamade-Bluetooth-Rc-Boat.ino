#include <Servo.h>

Servo tetik;
Servo namlu;

const int soli = 5;
const int sagi = 3;
const int soli2 = 6;
const int sagi2 = 9;
const int solg = 8;
const int sagg = 10;
const int buzzer = 11;
String readString;

int hiz;

void setup() 
{
  Serial.begin(9600);
  pinMode(soli , OUTPUT); 
  pinMode(sagi , OUTPUT);
  pinMode(soli2 , OUTPUT); 
  pinMode(sagi2 , OUTPUT);
  pinMode(solg , OUTPUT); 
  pinMode(sagg , OUTPUT);
  pinMode(buzzer , OUTPUT);
  namlu.attach(4); 
  tetik.attach(7);  
}
void loop() 
{
  while (Serial.available()) 
  {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) 
  {
    Serial.println(readString);

    if (readString == "throw")
    {
      tetik.write(125);
    }
    if (readString == "drop")
    {
      tetik.write(85);
    }

    if (readString == "zeroo")
    {
      namlu.write(2);
    }
    if (readString == "one")
    {
      namlu.write(10);
    }
    if (readString == "two")
    {
      namlu.write(20);
    }
    if (readString == "three")
    {
      namlu.write(30);
    }
    if (readString == "four")
    {
      namlu.write(40);
    }
    if (readString == "five")
    {
      namlu.write(50);
    }
    if (readString == "six")
    {
      namlu.write(60);
    }
    if (readString == "seven")
    {
      namlu.write(70);
    }
    if (readString == "eight")
    {
      namlu.write(80);
    }
    if (readString == "nine")
    {
      namlu.write(90);
    }
    if (readString == "tenn")
    {
      namlu.write(100);
    }
    if (readString == "eleven")
    {
      namlu.write(110);
    }
    if (readString == "twelve")
    {
      namlu.write(120);
    }
    if (readString == "thirteen")
    {
      namlu.write(130);
    }
    if (readString == "fourteen")
    {
      namlu.write(140);
    }
    if (readString == "fifteen")
    {
      namlu.write(150);
    }
    if (readString == "sixteen")
    {
      namlu.write(160);
    }
    if (readString == "seventeen")
    {
      namlu.write(170);
    }
    if (readString == "eighteen")
    {
      namlu.write(178);
    }
    
    if (readString == "zero")     
    {
      hiz = 0;
    }
    if (readString == "ten")     
    {
      hiz = 25;
    }
    if (readString == "twenty")     
    {
      hiz = 50;
    }
    if (readString == "thirty")     
    {
      hiz = 75;
    }
    if (readString == "fourty")     
    {
      hiz = 100;
    }
    if (readString == "fifty")     
    {
      hiz = 125;
    }
    if (readString == "sixty")     
    {
      hiz = 150;
    }
    if (readString == "seventy")     
    {
      hiz = 175;
    }
    if (readString == "eighty")     
    {
      hiz = 200;
    }
    if (readString == "ninety")     
    {
      hiz = 225;
    }
    if (readString == "hundred")     
    {
      hiz = 255;
    }
    if (readString == "forward")     
    {
      analogWrite(soli , hiz);
      analogWrite(sagi , hiz);
      analogWrite(soli2 , hiz);
      analogWrite(sagi2 , hiz);
    }
    if (readString == "backward")     
    {
      analogWrite(solg , hiz);
      analogWrite(sagg , hiz);
    }
    if (readString == "left")     
    {
      analogWrite(solg , hiz);
      analogWrite(sagi , hiz);
      analogWrite(sagi2 , hiz);
    }
    if (readString == "right")     
    {
      analogWrite(soli , hiz);
      analogWrite(soli2 , hiz);
      analogWrite(sagg , hiz);
    }
    if (readString == "leftforward")     
    {
      analogWrite(soli , hiz);
      analogWrite(soli2 , hiz);
    }
    if (readString == "rightforward")     
    {
      analogWrite(sagi , hiz);
      analogWrite(sagi2 , hiz);
    }
    if (readString == "leftbackward")     
    {
      analogWrite(solg , hiz);
    }
    if (readString == "rightbackward")     
    {
      analogWrite(sagg , hiz);
    }
    if (readString == "stop")     
    {
      analogWrite(soli , 0);
      analogWrite(sagi , 0);
      analogWrite(soli2 , 0);
      analogWrite(sagi2 , 0);
      analogWrite(solg , 0);
      analogWrite(sagg , 0);
    }
    if (readString == "sound")     
    {
      digitalWrite(buzzer , HIGH);
    }
    if (readString == "shutup")     
    {
      digitalWrite(buzzer , LOW);
    }
    readString="";
  } 
}
