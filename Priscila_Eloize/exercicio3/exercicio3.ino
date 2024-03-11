//Declaração de variaveis
float salario, salario_receber , gratificacao, imposto;

void setup() {
  //inicialização do monitor serial
  Serial.begin(96000);
  
  delay(1000);
  
}

void loop() {
//Leitura do salario
  Serial.println ("Digite o salario: ");
  while(Serial.available());
  //Aguarde a entrada de valores do usuario
  
  salario = Serial.parseFloat();
  Serial.println(salario);
  
  //Calculo da gratificação
  gratificacao = salario * 5/100;
  
  //exibe o valor da gratificacao
  Serial.print("O imposto foi: ");
  Serial.println(gratificacao);
  delay(1000);
  
    //calculo do imposto
  imposto = salario * 7/100;
  
  //exibe o valor do imposto
  Serial.print("o imposto foi: ");
  Serial.println(imposto);
  delay(1000);
  
  //Calculo do salario a receber

  salario_receber = salario + gratificacao - imposto;
  
  //Exibição do salario a receber 
  Serial.print("Salario a receber: ");
  Serial.println(salario_receber);
  delay(1000);
}
