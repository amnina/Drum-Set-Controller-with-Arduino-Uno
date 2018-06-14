#include <Wire.h>
#include <avr/io.h>
void setup() {
  Serial.begin(9600);
  Wire.begin(); // join i2c bus (address optional for master)
}

char key = 'z';

void loop()
{
  if (Serial.available()>0)
  {
    key = Serial.read();
    Wire.beginTransmission(7); // transmit to device #7
    Wire.write(key);              // sends one byte
    Wire.endTransmission();    // stop transmitting

    Wire.beginTransmission(8); // transmit to device #8
    Wire.write(key);              
    Wire.endTransmission();    // stop transmitting
  }
  delay(100);
}
