//Números Reais*/
float nota1, nota2, nota3, peso1 , peso2, peso3, media ;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);


  delay(1000);  //Espera estratégica
}

void loop() {

  Serial.println("Digite a nota1: ");

  //while = comando de repetição  "enquanto"
  while (Serial.available() == 0) {
    //Aguarda a entrada de valores do usuário
  }

  //Lê o valor do serial e aguarda a variável nota1
  nota1 = Serial.parseFloat();

  Serial.println("Digite a nota2: ");
  while (Serial.available() == 0) {
    //Aguarda a entrada da nota2
  }

  nota2 = Serial.parseFloat();

  Serial.println("Digite a nota3: ");
  while (Serial.available() == 0) {
    //Aguarda a entrada da nota3
  }
  nota3 = Serial.parseFloat();
}

  //Atribuição dos pesos
   Serial.println("Digite o peso 1: ");
   while(Serial.available() == 0){
   //Aguarda a entrada do peso 1
  }
   peso1 = Serial.parseFloat();

   Serial.println("Digite o peso 2: ");
   while (serial.available() == 0) {
   //Aguarda a entrada do peso 2
  }
   peso2 = serial.parseFloat();

   Serial.println("Digite o peso3: ");
   while (Serial.available() == 0) {
   //Aguarde a entra do peso 3
   }
   peso3 = Serial.parseFloat();

  //Cálculo da media ponderada
   media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / 

  //Exibe o valor da media calculada
   Serial.println("Media ponderada: ") 
   Serial.println(media);
   delay(1000);
   }

//criando uma função chamada
float aguardaEntrada(){
  while(!Serial.available()){
    //Aguarda até que um valor seja digitado
 } 

 //retornar o valor digitado no serial em tipo floar
 return Serial.parseFloat();
}