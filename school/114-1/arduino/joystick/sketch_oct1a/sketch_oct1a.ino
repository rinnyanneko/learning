const int xPin = 0;
const int yPin = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xval = analogRead(xPin);
  int yval = analogRead(yPin);
  Serial.println(xval, yval);
}
