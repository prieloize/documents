const int buttonPin = 2;  // Pino ao qual o botão está conectado
int buttonState = 0;      // Estado atual do botão
int lastButtonState = 0;  // Estado anterior do botão

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.println("Pressione o botão para sortear a ordem dos personagens.");
}

void loop() {
  // Lê o estado atual do botão
  buttonState = digitalRead(buttonPin);

  // Verifica se o botão foi pressionado
  if (buttonState == HIGH && lastButtonState == LOW) {
    // Realiza o sorteio e exibe a ordem dos personagens
    sortearPersonagens();
  }

  // Atualiza o estado anterior com o estado atual
  lastButtonState = buttonState;

  // Pequeno atraso para evitar bouncing
  delay(50);
}

void sortearPersonagens() {
  // Array com os nomes dos personagens
  String personagens[] = {"Heroi 1", "Heroi 2", "Vilao 1", "Vilao 2"};
  int tamanho = 4;

  // Embaralha o array de personagens
  for (int i = 0; i < tamanho; i++) {
    int indiceAleatorio = random(0, tamanho);
    String temp = personagens[i];
    personagens[i] = personagens[indiceAleatorio];
    personagens[indiceAleatorio] = temp;
  }

  // Exibe a ordem sorteada no Serial Monitor
  Serial.println("Ordem sorteada:");
  for (int i = 0; i < tamanho; i++) {
    Serial.println(personagens[i]);
  }
  Serial.println();
}
