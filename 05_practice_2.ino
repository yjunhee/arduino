#define PIN7 7
void setup() {
pinMode(PIN7, OUTPUT);
digitalWrite(PIN7, LOW);
delay(1000);
int a;
a = 0;
}
int a;
void loop(){
if (a < 6){
  a = a + 1;
  digitalWrite(PIN7, LOW);
  delay(200);
  digitalWrite(PIN7, HIGH);
  delay(200);
}
else{
  while(1){
    digitalWrite(PIN7, HIGH);
}
}
}
