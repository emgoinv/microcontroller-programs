# include <NewPing.h>

#define TRIGGER 2
#define ECHO 5

NewPing sonar(TRIGGER, ECHO);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(sonar.ping_cm());
  delay(100);
}
