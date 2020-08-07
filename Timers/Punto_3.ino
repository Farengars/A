unsigned long tiempo1=0, tiempo2=0; 
int estado = LOW;    
const int ledPin =  13;    
long int timer=3000;                               

void setup() {
pinMode(ledPin, OUTPUT);           
Serial.begin(9600);
}

void loop() {
  tiempo1=millis();                 
  if((tiempo1-tiempo2)>timer)       
  {
    tiempo2=tiempo1;
    
    if(estado==LOW){
      estado=HIGH;
    }
    else{
      estado=LOW;
    }
    digitalWrite(ledPin, estado);
  }
}
