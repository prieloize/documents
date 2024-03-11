//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

  delay(1000); //parada estrátegica

}

void loop() {
  tone (pinoBuzzer, 523);//Nota musical dó
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//Desliga a buzzer
  digitalWrite(pinoLedVermelho, LOW);//apaga o LED
  delay(1000);

}