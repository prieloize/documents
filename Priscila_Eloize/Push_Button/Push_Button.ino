 /*Declaração da constante que armazena o pino do push button*/
#define pinoButton 8


//Declaração da variável de estado do botão
bool status = false;

void setup() {
  // Definir a modalidade do pino
  pinMode (pinoButton, INPUT);

  Serial.begin (9600);

  delay (1000); //parada estratégica
}

void loop() {
  //Lendo o pino digital atráves da constante
  Serial.println(digitalRead(pinoButton));
  
  if (digitalRead(pinoButton) == 1 && status == false) {
    Serial.println("Botão apertado ON...");
    status = true;
  }
  else if (digitalRead(pinoButton) == 1 && status == true){
    Serial.println("Botão apertado OFF...");
    status = false;
  }

  
  delay(1000); //parada estratégica

}
