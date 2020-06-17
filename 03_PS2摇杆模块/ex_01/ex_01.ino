/* For more projects and tutorials visit
   https://electronicsprojectshub.com/category/arduino/
*/
// Arduino pin numbers
int SW = 2; // digital pin connected to switch output
// A0-> X ; A1-> Y;
void setup() {
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  Serial.begin(115200);
}
void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(A0));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(A1));
  Serial.print("\n");
  delay(500);
}
