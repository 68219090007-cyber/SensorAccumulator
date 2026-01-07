/* LAB 6.4 */
//https://app.cirkitdesigner.com/project/3e35303f-4f46-4c35-a8b6-40edc24fb9ed
#define motorR1_Pin 9
#define motorR2_Pin 8

#define motorR3_Pin 3
#define motorR4_Pin 2


#define EN_B_Pin 5
#define EN_A_Pin 10

void setup() {
  Serial.begin(9600);
  pinMode(motorR1_Pin,OUTPUT);
  pinMode(motorR2_Pin,OUTPUT);
  pinMode(motorR3_Pin,OUTPUT);
  pinMode(motorR4_Pin,OUTPUT);

  pinMode(EN_B_Pin ,OUTPUT);
  pinMode(EN_A_Pin ,OUTPUT);

  digitalWrite(motorR1_Pin,0); 
  digitalWrite(motorR2_Pin,0);

}
void Moff() {
  
}
void loop() {




//เดินหน้า F
//L 100% R100%
  analogWrite(EN_B_Pin,255);
  analogWrite(EN_A_Pin,255);
  digitalWrite(motorR1_Pin,1); 
  digitalWrite(motorR2_Pin,0); 
  digitalWrite(motorR3_Pin,1); 
  digitalWrite(motorR4_Pin,0);
  Serial.println ("Motor rotate forward");
  delay(2000);

  Moff();

//ถอยหลัง R
//L 100% R100%
   analogWrite(EN_B_Pin,255);
  analogWrite(EN_A_Pin,255);
  digitalWrite(motorR1_Pin,1); 
  digitalWrite(motorR2_Pin,0); 
  digitalWrite(motorR3_Pin,1); 
  digitalWrite(motorR4_Pin,0);
 Serial.println("Motor rotate backward");
  delay(2000);

  Moff();

//เลี้ยวซ้าย L
//L50% R100%
   analogWrite(EN_B_Pin,255);
  analogWrite(EN_A_Pin,50);
  digitalWrite(motorR1_Pin,1); 
  digitalWrite(motorR2_Pin,0); 
  digitalWrite(motorR3_Pin,1); 
  digitalWrite(motorR4_Pin,0);
  Serial.println("Motor turn left");
  delay(2000);

  Moff();

//เลี้ยวขวา R 
//L100% R50%
  analogWrite(EN_B_Pin,50);
  analogWrite(EN_A_Pin,255);
  digitalWrite(motorR1_Pin,0); 
  digitalWrite(motorR2_Pin,1); 
  digitalWrite(motorR3_Pin,0); 
  digitalWrite(motorR4_Pin,1);
  Serial.println("Motor turn right");
  delay(2000);

  Moff();

  //หยุดนิ่ง
 //L0% R0%
  analogWrite(EN_B_Pin,0);
  analogWrite(EN_A_Pin,0);
  digitalWrite(motorR1_Pin,0); 
  digitalWrite(motorR2_Pin,0); 
  digitalWrite(motorR3_Pin,0); 
  digitalWrite(motorR4_Pin,0);
  Serial.println("Motor stopped");
  delay(2000);

  Moff();
}
