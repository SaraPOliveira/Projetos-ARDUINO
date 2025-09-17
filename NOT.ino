/**
  Funções Lógicas - NOT
  Simulador de uma prensa BI-Manual
  @author Sara Oliveira
*/

void setup() {
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  /*
  Serial.begin(9600);
  digitalWrite( 12, 0); // HIGH = 1 = 5V | LOW = 0 = GND
  int led = digitalRead(12); //Capturar o estado do LED (0 ou 1)
  Serial.print("Valor de leitura do LED: ");
  Serial.println(led);
  */
}

void loop() {
  int botao = digitalRead(2);
  int led = digitalRead(12);
  //se o botão 1 for pressionado INVERTER a lógica 
  //para ascender ou APAGAR o LED
  if (botao == 0){
    digitalWrite(12, !led); //! Função NOT = 1
  }
   delay(150); //Minimizar efeito mecânico do Botão
}
