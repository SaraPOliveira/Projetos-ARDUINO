/**
  Funções Lógicas - OR
  Simulador de uma prensa BI-Manual
  @author Sara Oliveira
*/

void setup() {
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  int botao1 = digitalRead(2);
  int botao2 = digitalRead(3);

  //Função AND
  //Se o botão 1 "E" o botão 2 forem pressionados
  if (botao1 == 0 || botao2 == 0){
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }

}
