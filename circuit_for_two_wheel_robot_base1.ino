// C++ code
//Define the pins

int motorPin1 = 8;    
int motorPin2 = 9;    
int motorPin3 = 10;    
int motorPin4 = 7;     
int motorPin5 = 6;     
int motorPin6 = 5;     

void setup() {
  
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);
}

void loop() {
  
  // Turn the motor in one direction.
  
  digitalWrite(motorPin1, HIGH);       //HIGH Enable 1 & 2 Contact pin8.
  digitalWrite(motorPin2, LOW);       //input 1 Contact pin 9. 
  digitalWrite(motorPin3, HIGH);        //input 2 Contact pin 10.
  digitalWrite(motorPin4, HIGH);       //HIGH Enable 3 & 4 Contact pin 7.
  digitalWrite(motorPin5, LOW);        //input 3 Contact pin 6 .
  digitalWrite(motorPin6, HIGH);       //input 4 Contact pin 5 .
}
