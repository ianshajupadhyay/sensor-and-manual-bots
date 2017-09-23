 int led;
int sens = A0;

#define RELAY1  2                        

#define RELAY2  4                        

//#define RELAY3  8                        

//#define RELAY4  9

 

void setup()

{    
pinMode(sens,INPUT);
pinMode(led,OUTPUT);
// Initialise the Arduino data pins for OUTPUT

  pinMode(RELAY1, OUTPUT);       

  pinMode(RELAY2, OUTPUT);

  //pinMode(RELAY3, OUTPUT);

  //pinMode(RELAY4, OUTPUT);

}

 

 void loop()

{int x;
x=analogRead(sens);
delay(100);
if(x>716)
analogWrite(led,x);
delay(500);
Serial.print("reading=");
Serial.println(x);


   digitalWrite(RELAY1,LOW);           // Turns ON Relays 1

   delay(5000);                                      // Wait 2 seconds

   digitalWrite(RELAY1,HIGH);          // Turns Relay Off

 

   digitalWrite(RELAY2,LOW);           // Turns ON Relays 2

   delay(5000);                                      // Wait 2 seconds

   digitalWrite(RELAY2,HIGH);          // Turns Relay Off

 

   //digitalWrite(RELAY3,LOW);           // Turns ON Relays 3

   //delay(2000);                                      // Wait 2 seconds

   //digitalWrite(RELAY3,HIGH);          // Turns Relay Off

 

   //digitalWrite(RELAY4,LOW);           // Turns ON Relays 4

   //delay(2000);                                      // Wait 2 seconds

   //digitalWrite(RELAY4,HIGH);          // Turns Relay Off        

 }


