#define Buzzer 2
#define ledVerde 3
#define ledVermelho 4


void setup() {
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.println("Herois, digite sua pontuacao final:");
}

void loop() {
  if (Serial.available() > 0) {
    // Lê o número inteiro digitado pelos heróis
    int jogador1 = Serial.parseInt();
    Serial.println(jogador1);

    // Verifica se o heroi digitou um número e pressionou Enter
    // if (Serial.read() == '\n') {
    Serial.println("Viloes, digite sua pontuacao final: ");

    // Aguarda até que os vilões digitem um número
    while (!Serial.available()) {
    }

    // Lê o número inteiro digitado pelos vilões
    int jogador2 = Serial.parseInt();
    Serial.println(jogador2);

    // Verifica se o jogador 2 digitou um número e pressionou Enter
    //if (Serial.read() == '\n') {
    // Verifica quem ganhou
    if (jogador1 > jogador2) {
      Serial.println("Herois ganharam!");
      delay(500);
      digitalWrite(Buzzer, HIGH);
      tone(Buzzer, 500);  // Frequência de 500Hz por 0.5 segundo caso os heróis ganh
      digitalWrite(ledVermelho, LOW);
      //delay(1000);  // Mantém o LED verde ligado por 0.5 segundo
      digitalWrite(ledVerde, HIGH);
      delay(2000);
      digitalWrite(ledVerde, LOW);
      noTone(Buzzer);
      

    } else if (jogador2 > jogador1) {
      Serial.println("Viloes ganharam!");
      delay(500);
 
      digitalWrite(Buzzer, HIGH);
      tone(Buzzer, 1000);  // Frequência de 500Hz por 0.5 segundo caso os heróis ganh
      digitalWrite(ledVerde, LOW);
      //delay(1000);  // Mantém o LED verde ligado por 0.5 segundo
      digitalWrite(ledVermelho, HIGH);
      delay(2000);
      digitalWrite(ledVermelho, LOW);
      noTone(Buzzer);
       
      // Mantém o LED vermelho ligado por 0.5 segundo
      //digitalWrite(pinoVermelho, LOW);
      noTone(Buzzer);
      
    } else {
      Serial.println("Empate!");
      tone(Buzzer, 750, 2000);  // Frequência de 750Hz por 5 segundo em caso de empate
      digitalWrite(ledVermelho, HIGH);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,LOW);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,HIGH);
      delay(100);
      digitalWrite(ledVerde, LOW);
      delay(100);
      digitalWrite(ledVermelho, HIGH);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,LOW);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,HIGH);
      delay(100);
      digitalWrite(ledVerde, LOW);
      delay(100);
      digitalWrite(ledVermelho, HIGH);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,LOW);
      delay(100);
      digitalWrite(ledVerde, HIGH);
      delay(100);
      digitalWrite(ledVermelho,HIGH);
      delay(100);
      digitalWrite(ledVerde, LOW);
      delay(100);
      digitalWrite(ledVermelho,LOW);
      delay(100);
      Serial.println("Herois, digite um número inteiro:");
    // Limpa o buffer da porta serial
    // Aguarda até que ocorra alguma interação
    while (!Serial.available()) {
    }
    }

    //Serial.println("Herois, digite um número inteiro:");
    // Limpa o buffer da porta serial
    // Aguarda até que ocorra alguma interação
    while (!Serial.available()) {
    }


    //}
    //}
  }
}
