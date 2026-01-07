/* LAB 6.2 */
//https://app.cirkitdesigner.com/project/9f8fb0eb-f942-43c4-a075-f649d21cd143
#define motorR1_Pin 2
#define motorR2_Pin 3
#define EN_B_Pin 4


void setup() {
 Serial.begin(9600);
 pinMode (motorR1_Pin,OUTPUT) ;
 pinMode (motorR2_Pin,OUTPUT) ;
 pinMode (EN_B_Pin,OUTPUT) ;
 
 digitalWrite(motorR1_Pin,0);
 digitalWrite(motorR2_Pin,0);
 


}

void loop() {
  //motor R  , turn
    /* IN3 IN4
       0   1 */
 digitalWrite(EN_B_Pin,1); // IN4 TO 0
 digitalWrite(motorR1_Pin,1); // IN4 TO 0
 digitalWrite(motorR2_Pin,0); // IN3 TO 1
 delay(2000);

 //motor R  , turn off
    /* IN3 IN4
       1   0 */
       
 digitalWrite(motorR1_Pin,0); // IN4 TO 0
 digitalWrite(motorR2_Pin,0); // IN3 TO 1
 delay(200);

  //motor R  , turn f
    /* IN3 IN4
       1   0 */
 digitalWrite(motorR1_Pin,0); // IN4 TO 0
 digitalWrite(motorR2_Pin,1); // IN3 TO 1
 delay(2000);
 
}
