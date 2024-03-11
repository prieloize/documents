//Números Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);


  delay(1000);  //Espera estratégica
}

void loop() {

  Serial.println("Digite a nota1: ");
  nota1 = aguardaEntrada();
  Serial.println(nota1);

  Serial.println("Digite a nota2: ");
  nota2 = aguardaEntrada();
  Serial.println(nota2);

  Serial.println("Digite a nota3: ");
  nota3 = aguardaEntrada();
  Serial.println(nota3);


  //Atribuição dos pesos
  Serial.println("Digite o peso 1: ");
  peso2 = aguardaEntrada();
  Serial.println(peso1);

  Serial.println("Digite o peso 2: ");
  peso3 = aguardaEntrada();
  Serial.println(peso2);

  //Atribuição dos pesos
  Serial.println("Digite o peso 3: ");
  peso3 = aguardaEntrada();
  Serial.println(peso3);

  //Cálculo da media ponderada
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  //Exibe o valor da media calculada
  Serial.print("Media ponderada: ");
  Serial.println(media);
  delay(1000);
}

//criando uma função chamada
float aguardaEntrada() {
  while (!Serial.available()) {
    //Aguarda até que um valor seja digitado
  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}