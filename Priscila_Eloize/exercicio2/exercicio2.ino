 //Declaração das variaveis / numeros reais/
 float salario, percentual, aumento, novosalario;

void setup() {
  // Inicia a comunicação Serial
  Serial.begin(9600);
  
  delay(1000);  //Espera estrategica
}

void loop() {
  Serial.println("Digite o salario");
  while(Serial.available()); //Aguarda até que o usuario digite algo
  salario = Serial.parseFloat();
  percentual = Serial.parseFloat ();
    
    //Calcula o novo salario
    novosalario = salario * (1 + percentual / 100);

    //Exibe o novo salario
    novosalario = salario * (1 + percentual / 100);
    //Exibe novo salario na comunicação serial
    Serial.print ("novo salario: ");
    Serial.println(novosalario);

    delay(1000);
  }

