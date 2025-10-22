const int X_PIN = 0;
const int Y_PIN = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xVal = analogRead(X_PIN);
  int yVal = analogRead(Y_PIN);
  if (xVal >= 600){
    Serial.print(1);
  }else if (xVal <= 400){
    Serial.print(2);
  }
  if (yVal >= 600){
    Serial.print(3);
  }else if (yVal <= 400){
    Serial.print(4);
  }
  //Serial.print(xVal);
//  Serial.println(yVal);
  delay(100);
}
