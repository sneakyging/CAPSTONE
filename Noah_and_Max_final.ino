#include <Servo.h>


int pos = 0; 
const int buttonPin = 7;
int RedLED1 = 11;
int RedLED2 = 12;
int buttonState = 0;
Servo myservo;
Servo myservo2;



void setup() {

  pinMode(RedLED1, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(RedLED2, OUTPUT);
  pinMode(buttonPin, INPUT);
  myservo.attach(9);
  myservo2.attach(10);
  
}

void loop() {
   buttonState = digitalRead(buttonPin);

  
  if (buttonState == HIGH) {
    
    for (pos = 0; pos <= 180; pos += 165) { 
    
    myservo.write(pos);              
    delay(15);                      
  }
    for (pos = 180; pos >= 0; pos -= 165) { 
    myservo.write(pos);              
    delay(1000);            
  }
    
    digitalWrite(RedLED1, HIGH);
  } else {
    
    digitalWrite(RedLED1, LOW);
  }
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == HIGH) {
    for (pos = 0; pos <= 180; pos += 165) { 
    
    myservo2.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 165) { 
    myservo2.write(pos);              
    delay(1000);                
    
    digitalWrite(RedLED2, HIGH);
    
    digitalWrite(RedLED2, LOW);
  }
  }
} 
