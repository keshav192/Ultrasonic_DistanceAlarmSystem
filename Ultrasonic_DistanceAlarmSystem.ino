#include <LiquidCrystal.h>
const int TrigPin = 9;
const int EchoPin = 8;
const int Buz = 10;
float  cm;
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  lcd.begin(16, 2);  
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(Buz,OUTPUT);
}
void loop()
{
  digitalWrite(TrigPin, LOW);       
  delayMicroseconds(2);
  digitalWrite(TrigPin,  HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  cm = pulseIn(EchoPin,  HIGH) / 58.0; //The echo time is converted into cm
  cm = (int(cm * 100.0)) /  100.0;     //Keep two decimal places
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(cm);

  if(cm<10)
  { //if you are puting the sensor behind the door use ">" sysmbole insted of ">" p.s.  make sure that the door nob is less than 15 cm away
      digitalWrite(Buz,HIGH);
      lcd.setCursor(0, 1);
      lcd.print("Too Close");
  }
    else
    {
      digitalWrite(Buz,LOW);
      lcd.setCursor(0, 1);
      lcd.print("Close"); 
   delay(200);
    }
}
