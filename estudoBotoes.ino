/**
  Estudos dos Botões (PULL DOWN, PULL UP, INPUT_PULLUP)
  PULL UP tem o resistor ligado no 5
  @author Sara Oliveira
*/

//Variáveis globais ocupam mais memória

void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT); //Botão B1 (PULL DOWN)
  pinMode(11, INPUT); //Botão B2 (PULL UP)
  pinMode(10, INPUT_PULLUP); //Botão B3 ATENÇÃO!!! (INPUT_PULLUP) PRECISA COLOCAR O "_"
}

void loop() {
  //Variável local (só funciona no Loop) que recebe a leitura de B1
  //Uma leitura digital pode retornar 0 (LOW) ou 1 (HIGH)
  int botao1 = digitalRead(12); //B1 (PULL DOWN)
  int botao2 = digitalRead(11); //B2 (PULL UP)
  int botao3 = digitalRead(10); //B3 (INPUT_PULLUP)
  Serial.print("Botao 1: ");
  Serial.print(botao1);
  Serial.print(" | ");
  Serial.print("Botao 2: ");
  Serial.print(botao2);
  Serial.print(" | ");
  Serial.print("Botao 3: ");
  Serial.println(botao3);
}
