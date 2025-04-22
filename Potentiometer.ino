const int LED = 6; 
const int POT = A0; 
int val;

void setup() {
  // put your setup code here, to run once: 
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  val = analogRead(POT);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(LED, val);
  delay(20);
}
