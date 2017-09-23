 #define led 4
// defines pins numbers

const int trigPin = 1;
const int echoPin = 0;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance=duration*.034/2;
if(distance>2000)
digitalWrite(led,200);
else
digitalWrite(led,LOW);

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
