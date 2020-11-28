const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
  Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
   
}

void loop() {


  setColor(150, 200, 0);
  delay(2000);
  setColor(0, 220, 80);
  delay(2000);
  setColor(100, 100, 100);
  delay(2000);
  setColor(20, 40, 180);
  delay(2000);
  setColor(0, 255, 0);
  delay(2000);
}

void setColor (int red,int green, int blue) {
  analogWrite(redPin,red);
  analogWrite(greenPin,green);
  analogWrite(bluePin,blue);
}
