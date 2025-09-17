/**
  Leitura Analógica - Luz de Cortesia
  @author Sara Oliveira
*/

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensor = analogRead(A0);
  Serial.println(sensor);
  //Calibração do sensor (500 = valor do dia)
  //SE valor > 500 (dia) apagar a Luz SENÃO (noite) acender a Luz
  if (sensor > 500) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}