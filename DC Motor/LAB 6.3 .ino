/* LAB 6.3 */
//https://app.cirkitdesigner.com/project/18c70a87-ae6e-4026-b200-955016492469
#define motorR1_Pin 2
#define motorR2_Pin 3
#define EN_B_Pin 5

void setup() {
  Serial.begin(9600);
  pinMode(motorR1_Pin,OUTPUT);
  pinMode(motorR2_Pin,OUTPUT);
  pinMode(EN_B_Pin ,OUTPUT);

  digitalWrite(motorR1_Pin,0); 
  digitalWrite(motorR2_Pin,0);

}

void loop() {

//motor R  ,  turn    
  /*  IN3   /*IN4        ENB
       0       1         255*/
  

  digitalWrite(motorR1_Pin,1); //iN4 to 0
  digitalWrite(motorR2_Pin,0); //iN3 to 1
  analogWrite(EN_B_Pin,125);
}
