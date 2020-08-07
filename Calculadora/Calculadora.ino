
void setup() {







Serial.begin(9600);



}



int a;



void loop()



{



  Serial.println("\n ingrese el primer número");







delay(3000); //le doy al usuario 3 segundos para que ingrese el numero







  if(Serial.available())



  {



   a = Serial.read("Ingreso el numero");



  }



  Serial.println(a);



}



if(a!=0);



{



Serial.println("Ingrese segundo numero");



delay(3000);



if(Serial.available());



{



b = Serial.readString();



Serial.print("Ingreso el Numero");



Serial.println(b);







}







}
