#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int trigPin = 9;
int echoPin = 10;

long duracao;
float distancia;

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Trena Digital");
  delay(2000);
  lcd.clear();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duracao = pulseIn(echoPin, HIGH);

  distancia = duracao * 0.034 / 2;

  lcd.setCursor(0, 0);
  lcd.print("Distancia:");

  lcd.setCursor(0, 1);
  lcd.print(distancia);
  lcd.print(" cm   "); 

  delay(500);
}
