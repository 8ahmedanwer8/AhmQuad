const int redLed = 25;
const int greenLed = 27;
const int yellowLed = 29;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void clearLedPattern{
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
  }
  
void pilotMode{
  clearLedPattern();
  digitalWrite(redLed, HIGH);
  }

void collisionAvoidMode(){
  clearLedPattern();
  digitalWrite(greenLed, HIGH);
  }
  
void hoverMode{
  clearLedPattern();
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  delay(100);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(100);
  }

void trackingMode{
  clearLedPattern();
  digitalWrite(yellowLed, HIGH);
  }
