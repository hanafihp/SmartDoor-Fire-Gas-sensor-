
// DEKLARASI PIN
int ledPin = 13;
int inputPin = A0;
int pirState = LOW;
int val = 0;
int pinApi = 10;
int data;
int motorPin = 7;

void setup()
{
  pinMode(inputPin, INPUT);
  pinMode(pinApi, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  data = digitalRead(pinApi);
  val = digitalRead(inputPin);

  if (val == 0 && data == 0)
  {
    digitalWrite(motorPin, LOW);
    Serial.println("PINTU TERTUTUP");
  }
  else if (val == 1 && data == 0)
  {
    digitalWrite(motorPin, HIGH);
    Serial.println("PINTU TERBUKA");
  }
  else if (val == 0 && data == 1)
  {
    digitalWrite(motorPin, HIGH);
    Serial.println("PINTU TERBUKA DAN KEBAKARAN");
  }
  else if (val == 1 && data == 1)
  {
    digitalWrite(motorPin, HIGH);
    Serial.println("PINTU TERBUKA DAN KEBAKARAN !!");
  }



