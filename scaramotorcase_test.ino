#include <Servo.h>
#include<AccelStepper.h>
Servo myServo;

const int stepX = 2;

const int dirX  = 5;



const int stepY = 3;

const int dirY  = 6;



const int stepZ = 4;

const int dirZ  = 7;



const int enPin = 8;

int data;



void setup() {
  myServo.attach(A0);  // ~PWM 아두이노 핀 번호를 선언한다.
  myServo.write(0);   // 서보모터의 초기 각도 값을 '0'으로 선언한다.


  // Sets the two pins as Outputs

  pinMode(stepX,OUTPUT);

  pinMode(dirX,OUTPUT);



  pinMode(stepY,OUTPUT);

  pinMode(dirY,OUTPUT);



   pinMode(stepZ,OUTPUT);

  pinMode(dirZ,OUTPUT);



  pinMode(enPin,OUTPUT);

  digitalWrite(enPin,LOW);

  Serial.begin(9600);

}



void loop() {
  while (Serial.available()){
    data = Serial.read();
   }
    if (data == '1') {
      case1();
      delay(10000);
      
    } else if (data == '2') {
      case2();
      delay(10000);
     }
     else if (data == '0') {
      case3();
      delay(10000);
     }
     
 }

void case1(){

// Enables the motor to move in a particular direction

  // Makes 200 pulses for making one full cycle rotation

  
  digitalWrite(dirX,HIGH);

  digitalWrite(dirY,LOW);

  digitalWrite(dirZ,HIGH); 
        myServo.write(110);
        delay(2000);


    
         



  
   for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }
   

  delay(2000); // One second delay
       
         myServo.write(0);
         delay(2000);

  digitalWrite(dirY,HIGH); 

  for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }  

  for(int x = 0; x < 150; x++) {

    digitalWrite(stepX,HIGH);

    delayMicroseconds(4100);

    digitalWrite(stepX,LOW);

    delayMicroseconds(4100);

  }

   delay(2000); // One second delay



  for(int x = 0; x < 150; x++) {

    digitalWrite(stepZ,HIGH);

    delayMicroseconds(2000);

    digitalWrite(stepZ,LOW);

    delayMicroseconds(2000);

  }

 

    digitalWrite(dirX,LOW);

    digitalWrite(dirY,LOW);

    digitalWrite(dirZ,LOW);



      for(int x = 0; x < 1500; x++) {

       digitalWrite(stepY,HIGH);

       delayMicroseconds(1000);

       digitalWrite(stepY,LOW);

       delayMicroseconds(1000);

       }

  
           myServo.write(110);
           delay(2000);


  digitalWrite(dirY,HIGH);

    
 for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }


  
 for(int x = 0; x < 150; x++) {

    digitalWrite(stepX,HIGH);

    delayMicroseconds(4100);

    digitalWrite(stepX,LOW);

    delayMicroseconds(4100);

  }

  delay(1000); // One second delay



  for(int x = 0; x < 150; x++) {

    digitalWrite(stepZ,HIGH);

    delayMicroseconds(2000);

    digitalWrite(stepZ,LOW);

    delayMicroseconds(2000);

  }
   delay(2000); // One second delay

 }









void case2(){

   digitalWrite(dirX,LOW);

  digitalWrite(dirY,LOW);

  digitalWrite(dirZ,LOW); 

        myServo.write(110);
        delay(2000);


    
         



  
   for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }
   

  delay(2000); // One second delay
       
         myServo.write(0);
         delay(2000);

  digitalWrite(dirY,HIGH); 

  for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }  

  for(int x = 0; x < 150; x++) {

    digitalWrite(stepX,HIGH);

    delayMicroseconds(4100);

    digitalWrite(stepX,LOW);

    delayMicroseconds(4100);

  }

   delay(2000); // One second delay



  for(int x = 0; x < 150; x++) {

    digitalWrite(stepZ,HIGH);

    delayMicroseconds(2000);

    digitalWrite(stepZ,LOW);

    delayMicroseconds(2000);

  }

 

    digitalWrite(dirX,HIGH);

    digitalWrite(dirY,LOW);

    digitalWrite(dirZ,HIGH);



      for(int x = 0; x < 1500; x++) {

       digitalWrite(stepY,HIGH);

       delayMicroseconds(1000);

       digitalWrite(stepY,LOW);

       delayMicroseconds(1000);

       }

  
           myServo.write(110);
           delay(2000);


  digitalWrite(dirY,HIGH);

    
 for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }


  
 for(int x = 0; x < 150; x++) {

    digitalWrite(stepX,HIGH);

    delayMicroseconds(4100);

    digitalWrite(stepX,LOW);

    delayMicroseconds(4100);

  }

  delay(1000); // One second delay



  for(int x = 0; x < 150; x++) {

    digitalWrite(stepZ,HIGH);

    delayMicroseconds(2000);

    digitalWrite(stepZ,LOW);

    delayMicroseconds(2000);

  }
   delay(2000); // One second delay

  }

void case3(){

  digitalWrite(dirX,LOW);

  digitalWrite(dirY,LOW);

  digitalWrite(dirZ,HIGH); 
        myServo.write(110);
        delay(2000);
     
 
 for(int x = 0; x < 1500; x++) {



    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

 

  }  
      myServo.write(0);
      delay(2000);

  delay(1500); // One second delay


  digitalWrite(dirX,HIGH);

  digitalWrite(dirY,HIGH);

  digitalWrite(dirZ,LOW); 
 
 for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);
  }

  delay(1500); // One second delay

    digitalWrite(dirX,LOW);

  digitalWrite(dirY,LOW);

  digitalWrite(dirZ,HIGH); 
     
 
 for(int x = 0; x < 1500; x++) {



    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

 

  }  
      myServo.write(110);
      delay(2000);

      digitalWrite(dirX,HIGH);

  digitalWrite(dirY,HIGH);

  digitalWrite(dirZ,LOW); 
 
 for(int x = 0; x < 1500; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);
  }

  delay(1500); // One second delay

  myServo.write(0);
      delay(2000);


}
