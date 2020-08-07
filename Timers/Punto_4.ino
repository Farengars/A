int procesos =0;
int procesos2=0;
int procoff=0;
const int ledPin =  13;    
const int ledPin12 =  12;    
long tiempo1;
void setup() {
pinMode(ledPin, OUTPUT); 
pinMode(ledPin12, OUTPUT);           
Serial.begin(9600);
}
void loop() {
  tiempo1=millis()/100;      
    if(tiempo1-procoff==1){
      digitalWrite(ledPin12,LOW);
      digitalWrite(ledPin, LOW);
      procoff=procoff+10;
      }
            if(tiempo1-procesos2 == 20){
   digitalWrite(ledPin, HIGH);
      procesos2=procesos2+20;
       }
    if(tiempo1-procesos == 10){
   digitalWrite(ledPin12, HIGH);
      procesos=procesos+10;
       }

       
       }
