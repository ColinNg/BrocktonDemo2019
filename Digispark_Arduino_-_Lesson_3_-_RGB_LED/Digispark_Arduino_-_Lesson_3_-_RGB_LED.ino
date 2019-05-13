/*
Adafruit Arduino - Lesson 3. RGB LED
*/

int redPin = 0;
int greenPin = 1;
int bluePin = 4;

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  setColor(255, 255, 255);  // white
  delay(1000);
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(224, 32, 0);  // orange
  delay(1000);
  setColor(192, 96, 0);  // yellow
  delay(1000);  
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(32, 0, 128);  // indigo
  delay(1000);
  setColor(96, 0, 128 );  // violet
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
