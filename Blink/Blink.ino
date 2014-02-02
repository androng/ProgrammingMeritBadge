/*  
    Boy Scout Merit Badge Day 
    Programming 2 Exercises
    
    Alloted time: 30 minutes
    
    Teaching: 
    DO NOT TYPE CODE FOR SCOUTS. Let the scouts do all typing. They learn by 
    doing. Have the "List of Arduino functions.pdf" on the other side 
    of the screen and ask them which function matches. Again, DO NOT TYPE CODE
    for scouts. 
    
    Use with the following circuit: 
    -Common-anode RGB LED (only the R and G are necessary)
    -Photoresistor/button
    MAKE SURE the green LED has twice the resistance as red and blue. 
    This allows for a nice "yellow" color. 
    
    Connect RGB cathodes to pins listed below. Connect photoresistor
    like this: 5V--photoresistor--10k--GND and connect A0 between 
    photoresistor and GND. 
    
*/

const byte RED = 3;     /* PWM pin*/
const byte GREEN = 5;   /* PWM pin*/
const byte BLUE = 6;    /* PWM pin*/

void setup(){
    Serial.begin(9600);
  
    /* Set RED pin to output */
    pinMode(RED, OUTPUT);
    /* Set GREEN pin to output */
    pinMode(GREEN, OUTPUT);
    /* Set BLUE pin to output */
    pinMode(BLUE, OUTPUT);
    
    /* Turn LEDs off */
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, HIGH);
}
/* Exercise 1: Modify an existing program. 
   How do we make the LED blink faster?
   Change the delays to 50 then 5. 
*/
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
///*  Exercise 3: Traffic light debugging
//    Emphasis on the debugging.
//    How do we rotate between red, green and yellow?
//
//    There is something wrong with this program. It 
//    is missing a delay(1000). Where does it go? 
//*/
//
//void loop(){
//    delay(1000);
//    /* Red LED on, green LED off */
//      digitalWrite(RED, LOW);
//      digitalWrite(GREEN, HIGH);
//
//
//    /* Red LED off, green LED on */
//      digitalWrite(RED, HIGH);
//      digitalWrite(GREEN, LOW);
//    
//    delay(1000);
//    /* Turn on LEDs to make yellow. (Hint: red and  green light together make yellow light) */
//
//
//}
///*  Exercise 4: Reading an analog sensor 
//    Take an analog input, output to the serial log
//    and dim the LED;
//*/
//void loop(){
//    /* Read analog pin 0 and save to variable "reading" */
//
//    /* Output "reading" to serial monitor. UPLOAD after this line and show the serial monitor. */
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
//
//    The variable "darkness" is used because of the common-anode
//    LEDs. This means that a value of 255 means off and 0 means on. 
//*/
//void loop(){
//    int darkness = 255; 
//    
//    /* Write a while loop that counts down to 127 */
//    while(      ){
//        /* analogWrite "darkness" to the LED */
//        
//        /* Subtract one from darkness */
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
/* If they finish all six exercises then they can spend time
   generating all seven colors with digitalWrite() or a lot
   more colors with while loops and analogWrite(). 
*/
