//LAB 6.1 DC Motor
//https://app.cirkitdesigner.com/project/89900eeb-3258-4404-974b-7cdad39a764a
#define motorPin 9


void setup() {
 pinMode(motorPin,OUTPUT);
}


void loop() {
  digitalWrite(motorPin,1);
  delay(2000);
  digitalWrite(motorPin,0);
  delay(2000);
}
