const byte RED = 3;
const byte GREEN = 5;
const byte BLUE = 7;

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
/* Exercise 1:
   How do we make the LED blink faster?
   Blink LED with 1s period */
void loop(){
    /* Delay for 500ms */
    delay(500);
    digitalWrite(RED, LOW);
    /* Delay for 500ms */
    delay(500);
    digitalWrite(RED, HIGH);
}
/*  Exercise 2:
    How do we make two LEDs blink at the same time? 
*/
void loop(){
    /* Delay 1000ms */
    delay(1000);
    /* Turn on red LED */
    digitalWrite(RED, LOW);
    /* Turn off green LED */
    digitalWrite(GREEN, HIGH);
    
    /* Do the opposite */
    delay(1000);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
}
/*  Exercise 3: Traffic light
    How do we rotate between red, green and yellow? 
*/

void loop(){
    delay(1000);
    /* Red LED on, green LED off */
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    
    delay(1000);
    /* Red LED off, green LED on */
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    
    delay(1000);
    /* Turn on LEDs to make yellow. (Hint: red + green = yellow) */
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
}
/*  Exercise 4: Reading an analog sensor 
    Take an analog input, output to the serial log
    and dim the green LED;
*/
void loop(){
    /* Read analog pin 0 and save to variable "reading" */
    int reading = analogRead(0);
    /* Output "reading" to serial monitor */
    Serial.println(reading);
    /* Divide "reading" by four and analogWrite to red LED */
    analogWrite(RED, reading/4);
}
/*  Exercise 5: Car detection
    In real intersections, there is a car detection loop: 
    http://imgur.com/yRCMwrQ . We can mimic this on a breadboard 
    with a photoresistor. We want the light to turn green when a 
    hand is over the photoresistor 
*/
void loop(){
    
    delay(1000);
    /* Red LED on, green LED off */
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    
    /* Write a while loop to hold until a hand is over the sensor */
    while(analogRead(0) > 500){
        ;
    }
    
    delay(1000);
    /* Red LED off, green LED on */
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    
    delay(1000);
    /* Turn on LEDs to make yellow. (Hint: red and green light together make yellow) */
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
}