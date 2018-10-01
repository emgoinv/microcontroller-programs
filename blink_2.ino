int redLED = 2;
int greenLED = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(1000);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(1000);
}
