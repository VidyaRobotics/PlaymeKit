/*
This is an interesting seven segment display interface project
In this project, we simply interface the display with microcontroller
and try to understand the seequence to be given to the display
Display we use is having 8 LED's and its Common Anode, means
we've to give +5v from Supply and arduino pins should give
GND
            a
          ------
         |      |
      f  |      |b
         |  g   |
          ------
         |      |
       e |      |c
         |      |
          ------
            d
 
These are the names of Segments of this Display
we've to turn on particular LED's to print a number
for example, for printing 1, we'll turn on segment B and segment C
and so on
 
*/
 
 
// Define the LED digit patters, from 0 - 9
// Note that these patterns are for common Anode displays
// 1 = LED off, 0 = LED on, in this order:
// Arduino pin: 2,3,4,5,6,7,8
int red = A3;

void setup()  // put your setup code here, to run once:
{
    pinMode(A3,OUTPUT);   // initialize digital pin A3 as an output.
    pinMode(A4,OUTPUT);   // initialize digital pin A4 as an output.
    pinMode(A5,OUTPUT);   // initialize digital pin A5 as an output.
}

void loop()            // put your main code here, to run repeatedly:
{
    digitalWrite(A4,HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500);            // wait for a 0.5 second
    digitalWrite(A3,LOW);  // turn the LED off (LOW is the voltage level)
    digitalWrite(A4,LOW);
    delay(100);
    digitalWrite(A3,HIGH);
    digitalWrite(A5,HIGH);
    delay(500);
    digitalWrite(A3,LOW);
    digitalWrite(A5,LOW);
    delay(100);
    digitalWrite(A4,HIGH);
    digitalWrite(A5,HIGH);
    delay(500);
    digitalWrite(A4,LOW);
    digitalWrite(A5,LOW);
    delay(100);
    digitalWrite(A4,HIGH);
    digitalWrite(A5,HIGH);
    digitalWrite(A3,HIGH);
    delay(500);
    digitalWrite(A4,LOW);
    digitalWrite(A5,LOW);
    digitalWrite(A3,LOW);
    delay(100);
    digitalWrite(A3,HIGH);
    delay(500);
    digitalWrite(A3,LOW);
    delay(100);
    digitalWrite(A4,HIGH);
    delay(500);
    digitalWrite(A4,LOW);
    delay(100);
    digitalWrite(A5,HIGH);
    delay(500);
    digitalWrite(A5,LOW);
    delay(100);
}
