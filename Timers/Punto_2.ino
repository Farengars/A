unsigned long tiempo1=0;
unsigned long tiempo2=0; 
const int ledPin =  13;    
long int timer=2000;                
int estado = LOW;                   

void setup() {
pinMode(ledPin, OUTPUT);            
Serial.begin(9600);
}
void loop() {
  tiempo1=millis();               
  if((tiempo1-tiempo2)>timer)      
  {
    tiempo2=tiempo1;
    Serial.println("Timer Activate");
    
  }
}
