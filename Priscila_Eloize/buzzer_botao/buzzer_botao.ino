//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

#define pinoLedVerde 5

//constante do botão
#define pinoButao 4

bool status = false;

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  status = true;
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoButao, INPUT);
  
  delay(1000); //parada estrátegica
}
  void loop(){
    
  }
