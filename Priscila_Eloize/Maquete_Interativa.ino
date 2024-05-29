const int pinoTrigger 2
const int pinoEcho 3
const int Buzzer 4
const int ledVerde 5
const int ledVermelho 6
const int sensorLDR A0
const int ledVermelho2 7
const int ledAmarelo 8
const int ledAmarelo 9

// Variáveis
long distancia;
int luminosidade;

void setup() {
  // Inicialização dos pinos
  pinMode(pinoTrigger, OUTPUT);
  pinMode(pinoEcho, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  Serial.begin(9600); 
  
  //Sensor ultrassônico
  digitalWrite(pinoTrigger, LOW);
  
  //LED verde como indicador de luminosidade
  digitalWrite(ledVerde, HIGH);
}

void loop() {
  // Mede a distância usando o sensor ultrassônico
  digitalWrite(pinoTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoTrigger, LOW);
  distancia = pulseIn(pinoEcho, HIGH) * 0.034 / 2;
  
  // Lê o valor do sensor LDR
  luminosidade = analogRead(sensorLDR);
  
  if (distancia < 30) { // Defina a nova distância de desativação do alarme
    // Desativa o alarme
    digitalWrite(Buzzer, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW); // Desliga o LED amarelo
    digitalWrite(ledBranco, LOW); // Desliga o LED branco
  } else if (30 < 100) { 
    // Ativa o alarme
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledVermelho, HIGH);
    delay(1000); // Tempo para o alarme tocar
    
    // Desativa o alarme
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW); // Desliga o LED amarelo
    digitalWrite(ledBranco, LOW); // Desliga o LED branco
  }
  
  // Verifica a luminosidade e aciona os LEDs de acordo
  if (luminosidade < 300) { // Defina o valor de luminosidade desejado
    digitalWrite(ledVerde, LOW); // Ambiente escuro, acende o LED verde
    digitalWrite(ledAzul, LOW); // Ambiente escuro, acende o LED azul
  } else {
    digitalWrite(ledVerde, HIGH); // Ambiente claro, apaga o LED verde
    digitalWrite(ledAzul, HIGH); // Ambiente claro, apaga o LED azul
  }
  
  // Exibe informações no Monitor Serial (opcional)
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.print(" cm, Luminosidade: ");
  Serial.println(luminosidade);
  
  delay(500); // Atraso para evitar leituras rápidas e imprecisas
}
