//Switch LEDs based on the input. 
/*
Assigning the values of the LED to the pins
*/
//GLOBAL VARIABLES
int ledPin1 = 8; 
 int ledPin2 = 9;
 int ledPin3 = 10;
 
 /* All pins are output. We're using 3 pins. */
 
void setup() {
 
 pinMode(ledPin1,OUTPUT); 
 pinMode(ledPin2,OUTPUT);
 pinMode(ledPin3,OUTPUT);
 
}

void loop() {
  
  int input = 1; //change input here to use different lighting options.(0-7)
  
  switch(input) {
    case 0: 
    digitalWrite(ledPin1,LOW); 
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    break;
    
    case 1: 
     digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,HIGH);
    break;
    
    case 2:
     digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
    break;
    
    case 3:
     digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    break;
    
    case 4:
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    break;
    
    case 5:
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,HIGH);
  
    
    break;
    
    case 6:
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
    break;
    
    case 7:
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    break;
    
    default:
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    break;
    
  }
}

