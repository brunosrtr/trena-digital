#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Endereço do LCD 
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pinos do sensor ultrassônico
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
  // Envia pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Recebe o pulso de volta e calcula duração
  duracao = pulseIn(echoPin, HIGH);

  // Calcula a distância em cm (velocidade do som / 2)
  distancia = duracao * 0.034 / 2;

  // Mostra no LCD
  lcd.setCursor(0, 0);
  lcd.print("Distancia:");

  lcd.setCursor(0, 1);
  lcd.print(distancia);
  lcd.print(" cm   "); // Os espaços apagam restos anteriores

  delay(500); // Atualiza a cada meio segundo
}
