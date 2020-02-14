/*
  Blink
  Turns an LED on for one second, then off for one second, repeatedly.
  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_PIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products
  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Blink
*/
#define LED_PIN 2
int D = 50;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void dimmer(int freq, int duty) {
    int period, onTime, offTime;
    period = 1000/freq;
    onTime = period * duty / 100;
    offTime = period - onTime;
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);
    digitalWrite(LED_PIN, LOW);
    delay(offTime);
}

void  timedBlink (int t){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(t);                       // wait for a second
}
// the loop function runs over and over again forever
void loop() {
         timedBlink(250);
         timedBlink(500);
         timedBlink(1000);
        //for(int t = 100; t--; t > 0){
        //dimmer(100, t);
        }
}
