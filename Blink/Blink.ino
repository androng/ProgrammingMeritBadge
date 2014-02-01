/*  
    Boy Scout Merit Badge Day 
    Programming 2 Exercises
    
    Use with the following circuit: 
    -Common-anode RGB LED (only the R and G are necessary)
    -Photoresistor/button
    
    Connect RGB cathodes to pins listed below. Connect photoresistor
    like this: 5V--photoresistor--10k--GND and connect A0 between 
    photoresistor and GND. 
*/

const byte RED = 3;
const byte GREEN = 5;
const byte BLUE = 7;

void setup(){
    Serial.begin(9600);
  
    /* Set RED pin to output */
    pinMode(RED, OUTPUT);
    /* Set GREEN pin to output */
    pinMode(GREEN, OUTPUT);
    
    /* Turn LEDs off */
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, HIGH);
}
/* Blink LED with 2s period. */
void loop(){
    /* Delay for 1000ms */
    delay(1000);
    /* Turn red LED on */
    digitalWrite(RED, LOW);
    /* Delay for 1000ms */
    delay(1000);
    /* Turn red LED off */
    digitalWrite(RED, HIGH);
}
///* Exercise 1:
//   How do we make the LED blink faster?
//   Blink LED with 1s period */
//void loop(){
//    /* Delay for 500ms */
//    delay(      );
//    digitalWrite(RED, LOW);
//    /* Delay for 500ms */
//    delay(      );
//    digitalWrite(RED, HIGH);
//}
///*  Exercise 2:
//    How do we make two LEDs blink at the same time? 
//*/
//void loop(){
//    /* Delay 1000ms */
//    
//    /* Turn on red LED */
//    
//    /* Turn off green LED */
//    
//    
//    /* Do the opposite */
//    
//}
///*  Exercise 3: Traffic light
//    How do we rotate between red, green and yellow? 
//*/
//
//void loop(){
//    delay(1000);
//    /* Red LED on, green LED off */
//
//
//    delay(1000);
//    /* Red LED off, green LED on */
//
//
//    
//    delay(1000);
//    /* Turn on LEDs to make yellow. (Hint: red and  green light together make yellow light) */
//
//
//}
///*  Exercise 4: Reading an analog sensor 
//    Take an analog input, output to the serial log
//    and dim the green LED;
//*/
//void loop(){
//    /* Read analog pin 0 and save to variable "reading" */
//
//    /* Output "reading" to serial monitor */
//
//    /* Divide "reading" by four and analogWrite to red LED */
//
//}
///*  Exercise 5: Car detection
//    In real intersections, there is a car detection loop: 
//    http://imgur.com/yRCMwrQ . We can mimic this on a breadboard 
//    with a photoresistor. We want the light to turn green when a 
//    hand is over the photoresistor 
//*/
//void loop(){
//    
//    delay(1000);
//    /* Red LED on, green LED off */
//    digitalWrite(RED, LOW);
//    digitalWrite(GREEN, HIGH);
//    
//    /* Write a while loop to hold until a hand is over the sensor */
//    
//    
//    
//    delay(1000);
//    /* Red LED off, green LED on */
//    digitalWrite(RED, HIGH);
//    digitalWrite(GREEN, LOW);
//    
//    delay(1000);
//    /* Turn on LEDs to make yellow. (Hint: red and green light together make yellow) */
//    digitalWrite(RED, LOW);
//    digitalWrite(GREEN, LOW);
//}
///*  Exercise 6: More LED fading
//    This will fade an LED back and forth using while loops. 
//*/
//void loop(){
//    int darkness = 255; 
//    
//    /* Write a while loop that counts down to 127 */
//    while(      ){
//        /* analogWrite "darkness" to the LED */
//        
//        /* Subtract one from brightness */
//        
//        /* Delay 30ms */
//        
//    }
//    
//    /* Write a while loop that counts up to 255 */
//    
//        /* analogWrite "darkness" to the LED */
//        
//        /* Add one to darkness */
//        
//        /* Delay 30ms */
//        
//    
//}
