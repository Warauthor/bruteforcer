#include <Servo.h> 


#define DASH 455
#define DOT 150
#define UP 95
#define DOWN 70
#define GAP 75
#define OPEN 180
#define UNLOCKED

int analogPin = 0;
int val = 0;





Servo servo; 

void setup() {
  // put your setup code here, to run once:
servo.attach(9);
Serial.begin(9600);
delay(500);
}

void loop() {
  dot();//Align servo arm
  for(int i = 0; i < 4; i++){
    dot();
    }
  for(int i = 0; i < 4; i++){
    dash();
    }
  servo.write(OPEN);
  Serial.print("Test");
  delay(15000);
}

void dot(){
  servo.write(DOWN);
  Serial.print("dot() called");
  delay(DOT);
  servo.write(UP);
  delay(GAP);
  }

void dash(){
  servo.write(DOWN);
  Serial.print("dash() called");
  delay(DASH);
  servo.write(UP);
  delay(GAP);
  }
