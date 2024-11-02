
#include <Arduino.h>
#include "LedControl.h"

// Initialise the LedControl library
// pin 12 on DIN, 
// pin 13 on Clk, 
// pin 1 on LOAD
// number of displays: 1
LedControl lc = LedControl(12, 13, 1, 1);
#define DELAY 100
const int ledCount = 10; 

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   
void setup() {
 pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
 
  // On startup, the MAX72XX chip is in power-safe mode
  // we are waking this chip for device 0 with the shutdown command
  lc.shutdown(0, false);

  // Set the intensity of the screen on device 0 with a value between 0 and 15
  lc.setIntensity(0, 5);
  
  // Clear the display of device 0
  lc.clearDisplay(0);


  //
  //      N
  //   NW   NE
  //      M
  //   SW   SE
  //      S      D
  //
  // D N NE SE S SW NW M
  lc.setRow(0, 0, B01101100);
  lc.setRow(0, 1, B00101001);
  lc.setRow(0, 2, B01001001);
  lc.setRow(0, 3, B01111000);
  lc.setRow(0, 4, B00010011);
  lc.setRow(0, 5, B01000110);
  lc.setRow(0, 6, B00110001);
  lc.setRow(0, 7, B00111000);
}

void loop() {
  


 

  digitalWrite (2, HIGH);
  delay(DELAY);
  digitalWrite (3, HIGH);
    lc.setRow(0, 6, B00111000);
  delay(DELAY);
  digitalWrite (4, HIGH);
  delay(DELAY);
  digitalWrite (5, HIGH);
    lc.setRow(0, 4, B01111000);
  digitalWrite (2, LOW);
  delay(DELAY);
  digitalWrite (6, HIGH);
  digitalWrite (3, LOW);
  delay(DELAY);
      digitalWrite (7, HIGH);
        lc.setRow(0, 4, B01101100);
    digitalWrite (4, LOW);
  delay(DELAY);
      digitalWrite (8, HIGH);
    digitalWrite (5, LOW);
      lc.setRow(0, 6, B00010011);
  delay(DELAY);
      digitalWrite (9, HIGH);
    digitalWrite (6, LOW);
  delay(DELAY);
  digitalWrite (10, HIGH);
    lc.setRow(0, 4, B01001001);
    digitalWrite (7, LOW);
  delay(DELAY);
      digitalWrite (11, HIGH);
    digitalWrite (8, LOW);
  delay(DELAY);
    digitalWrite (9, LOW);
  delay(DELAY);
    lc.setRow(0, 7, B00101001);
    digitalWrite (10, LOW);
  delay(DELAY);
    digitalWrite (11, LOW);
  delay(DELAY);
digitalWrite (11, HIGH);
  lc.setRow(0, 3, B01000110);
  delay(DELAY);
digitalWrite (10, HIGH);
delay (DELAY);
digitalWrite (9, HIGH);
  lc.setRow(0, 5, B01111000);
delay (DELAY);
digitalWrite (8, HIGH);
digitalWrite (11, LOW);
delay (DELAY);
 lc.setRow(0, 3, B00110001);
digitalWrite (7, HIGH);
digitalWrite (10, LOW);
delay (DELAY);
digitalWrite (6, HIGH);
  lc.setRow(0, 5, B00101001);
digitalWrite (9, LOW);
delay (DELAY);
digitalWrite (5, HIGH);
  lc.setRow(0, 0, B00110001);
digitalWrite (8, LOW);
delay (DELAY);
digitalWrite (4, HIGH);
  lc.setRow(0, 0, B00110001);
digitalWrite (7, LOW);
delay (DELAY);
digitalWrite (3, HIGH);
  lc.setRow(0, 3, B00111000);
digitalWrite (6, LOW);
  lc.setRow(0, 5, B01000110);
delay (DELAY);
digitalWrite (2, HIGH);
digitalWrite (5, LOW);
delay (DELAY);
digitalWrite (4, LOW);
delay (DELAY);
digitalWrite (3, LOW);
delay (DELAY);
digitalWrite (2, LOW);
  lc.setRow(0, 1, B01001001);
delay (DELAY);
  lc.setRow(0, 4, B01111000);
digitalWrite (2, HIGH);

  lc.setRow(0, 2, B01101001);
  delay(DELAY);
    digitalWrite (3, HIGH);
  delay(DELAY);
    digitalWrite (4, HIGH);
  delay(DELAY);
      digitalWrite (5, HIGH);
        lc.setRow(0, 1, B01000110);
    digitalWrite (2, LOW);
  delay(DELAY);
digitalWrite (6, HIGH);
  lc.setRow(0, 0, B00010011);
    digitalWrite (3, LOW);
  delay(DELAY);
      digitalWrite (7, HIGH);
        lc.setRow(0, 7, B00010011);
    digitalWrite (4, LOW);
  delay(DELAY);
      digitalWrite (8, HIGH);
    digitalWrite (5, LOW);
  delay(DELAY);
      digitalWrite (9, HIGH);
    digitalWrite (6, LOW);
  delay(DELAY);
  digitalWrite (10, HIGH);
    digitalWrite (7, LOW);
  delay(DELAY);
      digitalWrite (11, HIGH);
    digitalWrite (8, LOW);
  delay(DELAY);
    lc.setRow(0, 0, B01001001);
    digitalWrite (9, LOW);
  delay(DELAY);
    digitalWrite (10, LOW);
  delay(DELAY);
    digitalWrite (11, LOW);
  delay(DELAY);
digitalWrite (11, HIGH);
  lc.setRow(0, 7, B00101001);
  delay(DELAY);
digitalWrite (10, HIGH);
delay (DELAY);
digitalWrite (9, HIGH);
  lc.setRow(0, 5, B01000110);
delay (DELAY);
digitalWrite (8, HIGH);
digitalWrite (11, LOW);
delay (DELAY);
digitalWrite (7, HIGH);
digitalWrite (10, LOW);
delay (DELAY);
digitalWrite (6, HIGH);
digitalWrite (9, LOW);
delay (DELAY);
digitalWrite (5, HIGH);
digitalWrite (8, LOW);
delay (DELAY);
digitalWrite (4, HIGH);
  lc.setRow(0, 2, B01000111);
digitalWrite (7, LOW);
delay (DELAY);
digitalWrite (3, HIGH);
digitalWrite (6, LOW);
delay (DELAY);
digitalWrite (2, HIGH);
digitalWrite (5, LOW);
delay (DELAY);
digitalWrite (4, LOW);
delay (DELAY);
  lc.setRow(0, 7, B00101001);
digitalWrite (3, LOW);
delay (DELAY);
digitalWrite (2, LOW);
delay (DELAY);

  }
