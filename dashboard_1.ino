/*

Algoritmo de Simulação de Dashboad - Revisão 00

Desenvolvido por Thigo Barros para Arduino Uno

Criado em 10/05/2024

Criado para painel de 7 dígidos Modelo 5011BS

*/

#include <SevSeg.h>

SevSeg sevseg; 

void setup(){
    byte numDigits = 1; 
    byte digitPins[] = {}; 
    byte segmentPins[] = {7,8,11,10,9,6,5,12}; 
    bool resistorsOnSegments = true;
    byte hardwareConfig = COMMON_ANODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
}
void loop(){

  for (int i = 0; i<10; i++){
   sevseg.setNumber(i, 0); 
   sevseg.refreshDisplay();

   switch(i){
    case 1:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 2:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 3:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 4:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 5:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 6:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 7:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 8:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 9:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(1000);
    break;

    case 0:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(1000);
    break;
    }
  }
  Serial.println("O programa foi finalizado.");
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  sevseg.setNumber(9, 0);
  delay(1000); 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  sevseg.setNumber(0, 0);
  delay(2000);
}
