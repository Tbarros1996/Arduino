void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  int rodadas = 5;

  Serial.print("A quantidade de piscadas será: ");
  Serial.println(rodadas); 

  for (int i = 0; i < rodadas; i++) {
    int numero_led = random(1, 4); 

    switch(numero_led) {
      case 1:
        Serial.print("O Led que vai piscar será o: ");
        delay(1000);
        Serial.println(numero_led);
        digitalWrite(13, HIGH);
        delay(1000); 
        digitalWrite(13, LOW);
        break;
      case 2:
        Serial.print("O Led que vai piscar será o: ");
        delay(1000);
        Serial.println(numero_led);
        digitalWrite(12, HIGH);
        delay(500); 
        digitalWrite(12, LOW);
        break;
      case 3:
        Serial.print("O Led que vai piscar será o: ");
        delay(1000);
        Serial.println(numero_led);
        digitalWrite(8, HIGH);
        delay(1000); 
        digitalWrite(8, LOW);
        break;
      default:
        break;
    }
    delay(1000); 
  }
  Serial.println("O programa foi finalizado.");
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  
  delay(2000);
}


