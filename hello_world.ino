#define ledPin 13  //the led is connected to pin no. 13
void setup() {
 pinMode (ledPin,OUTPUT);
 Serial.begin(9600);  // baud rate (bits per second)

}

void loop()  //put the code here to run repeatedly
{
 myBlink();  //recall the function
}



void myBlink() // created  own function
{ 
  digitalWrite(ledPin,HIGH);  //ledpin is turned on high
  delay(1000);
  digitalWrite(ledPin,LOW);  //ledpin is turned on low
  delay(1000);
Serial.println("HELLO WORLD");   //print hello world
  }
