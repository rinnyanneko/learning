const int X_PIN = 0;
const int Y_PIN = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xVal = analogRead(X_PIN);
  int yVal = analogRead(Y_PIN);
  Serial.println(xVal, yVal);
  delay(100);
}
