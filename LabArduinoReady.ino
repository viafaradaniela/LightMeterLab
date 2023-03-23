int blueLedPin = 2;
int greenLedPin = 3;
int redLedPin = 4;
int yellowLedPin = 5;
int orangeLedPin = 6;

int lightSensorPin = A0;
int analogValue = 0;

void setup()
{
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(orangeLedPin, OUTPUT);
}

void loop()
{
  analogValue = analogRead(lightSensorPin);
  if(analogValue < 100){
    digitalWrite(blueLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(orangeLedPin, LOW); 
  
  } if(analogValue > 150  && analogValue < 200){
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(orangeLedPin, LOW);
  
  } if(analogValue > 250  && analogValue < 300){
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(orangeLedPin, LOW);
  
  }if(analogValue > 350  && analogValue < 400){
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(orangeLedPin, LOW);
  
  }if(analogValue > 450  && analogValue < 500){
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(orangeLedPin, LOW);
  
  }if(analogValue > 500){
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(orangeLedPin, HIGH);
  
  }

  
}
