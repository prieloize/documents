//Definição das variaveis
#define buzzer 2
#define pinoVerde 3
#define pinoVermelho 4
#define botaoGeral 5
#define pontuacaoMaior
#define BotaoHeroi 6
#define BotaoVilao 7
#define pontosbotaoHeroi
#define pontosbotaoVilao 
  

//variavel para aramazenar pontos dos jogadores
int botaoHeroi = 0;
int botaoVilao = 0;

//Estado anterior dos botoes para evitar contagem multiplas
int lastButtonStateheroi = LOW;
int lastButtonStatevilao = LOW;

void setup() {
  pinMode(botaoHeroi, INPUT);
  pinMode(botaoVilao, INPUT);
  //Definiçaõ do botão
  pinMode(buzzer, INPUT);
//Comunicação Serial
  Serial.print(9600);
  delay(1000);

}

void loop() {
//Lê  o estado atual dos botoes
int buttonStateBotaoHeroi =
digitalRead(BotaoHeroi);
int buttonStatebotaoVilao =
digitalRead(BotaoVilao);

//Comparação de pontos
BotaoHeroi = int(input("Herói digite sua pontuação final: "));
BotaoVilao = int(input("Vilão digite sua pontuação final: "));

//Verificação de pontuação maior
if (BotaoHeroi > BotaoVilao){
    Serial.println("Heroi venceu!!!");
   //toca tom grave
   tone (buzzer, 500, 500);
   //frequencia de 500hz por 1 segundo caso os herois ganharem
     digitalWrite(pinoVerde, HIGH);
      delay(300);
}             
else if (BotaoHeroi == BotaoVilao){
    Serial.println("Empate!!! jogue outra partida para definir o ganhador");
   //toca tom agudo
    tone (buzzer, 750, 500);
   //frequencia de 750hz  caso de empate
}
else{
    Serial.println("O vencedor é o Vilão!!!");
    tone (buzzer, 1000, 500);
   //frequencia de 1000hz caso so viloes ganharem
    digitalWrite(pinoVermelho, HIGH);
      delay(300);
}
  delay (1000);

  
}

