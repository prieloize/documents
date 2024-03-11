//Declaração das variaveis uqe represetam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  delay(1000);
}

void loop () {
  digitalWrite (ledVermelho, HIGH);
  deley(2000);
  digitalWrite(ledVermelho, LOW);
  deley(2000);
}