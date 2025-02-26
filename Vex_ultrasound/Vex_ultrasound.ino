const int triggerPin = 9;
const int echoPin = 10;
const int led = 8;
//int x=0;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, INPUT);
  pinMode(echoPin, OUTPUT);

}

void loop() {
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(echoPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin, LOW);

  long duration = pulseIn(triggerPin, HIGH);
  long distance = duration * 0.034 / 2;
  
  if (distance <=60)
  {
    digitalWrite(led, HIGH);
  } else
  {
    digitalWrite(led, LOW);
  }

  //Serial.print(x++);
  Serial.print(distance);
  Serial.println(" cm");
    delay(50);
}
