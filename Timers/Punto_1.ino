void setup() {
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
long tiempo=millis()/1000;
Serial.print("El arduino lleva encendido ");

Serial.print(tiempo);

Serial.print("segundos");
delay(1000);
}
