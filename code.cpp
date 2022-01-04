#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
// C++ code

int temperature = 0;

void setup()
{
  lcd.begin(16, 2);
  pinMode(A1, INPUT);
  Serial.begin(9600);

  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  lcd.print("Automated Plant");
  lcd.setCursor(0,1);
  lcd.print("Watering System!");
  delay(2000);
  lcd.clear();
  lcd.print("Temp= ");
  lcd.setCursor(0,1);
  lcd.print("WaterPump= ");
}

void loop()
{
  
  temperature = -40 + 0.488155 * (analogRead(A1) - 20);
  
  lcd.setCursor(6,0);
  lcd.print(temperature); 
  lcd.setCursor(11,1);
  Serial.println(temperature);
  
  if (temperature < 30) {
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    
    lcd.print("OFF");
  }
  if (temperature > 30) {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    
    lcd.print("ON ");
  }
  delay(10); // Delay a little bit to improve simulation performance
}
