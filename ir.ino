#define sens 7 
void setup()
{
  Serial.begin(9600);
  pinMode(sens,INPUT);
  
}

void loop() {
int x;
x=digitalRead(sens);



Serial.print("reading=");
Serial.println(x);


}
