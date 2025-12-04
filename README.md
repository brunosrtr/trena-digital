## 📏 **Trena Digital com Arduino e LCD I2C**

Este projeto implementa uma trena digital utilizando um sensor ultrassônico HC-SR04 e um display LCD 16x2 com interface I2C.
A distância medida é exibida em centímetros diretamente no display.

## 🚀 Funcionalidades

Medição de distância usando sensor HC-SR04

Exibição em tempo real no LCD 16x2 (I2C)

Cálculo automático da distância com base no tempo do pulso

Interface simples, rápida e fácil de usar

## 🛠️ Tecnologias utilizadas

Arduino UNO / Nano

HC-SR04 – Sensor ultrassônico

Display LCD 16x2 com I2C

Biblioteca LiquidCrystal_I2C

Interface Wire.h (I2C)

## 📡 Como funciona

O sensor ultrassônico envia um pulso sonoro pelo pino Trig.
Quando esse pulso retorna ao sensor (Echo), o Arduino mede o tempo de resposta e converte esse valor em distância.

Fórmula usada:
```
distância = (duração do pulso × velocidade do som) / 2
distância = duração × 0.034 / 2
```
## ⚙️ Conexões
HC-SR04 → Arduino

| HC-SR04 | Arduino |
| ------- | ------- |
| VCC     | 5V      |
| GND     | GND     |
| TRIG    | D9      |
| ECHO    | D10     |

LCD I2C → Arduino

| LCD I2C | Arduino     |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4 (ou SDA) |
| SCL     | A5 (ou SCL) |


## 📘 Como usar

Monte o circuito conforme a tabela de conexões

Instale a biblioteca LiquidCrystal_I2C na IDE Arduino

Faça o upload do código

A trena digital começará a exibir a distância medida no LCD

## 🧾 Licença

Este projeto é de uso livre para fins educacionais e pessoais.
