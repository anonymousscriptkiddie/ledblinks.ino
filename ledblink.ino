int redLED = 7;  // This is for the first red LED
int greenLED = 6;  // This is for the first green LED
int blueLED = 5;  // This is for the first blue LED
int yellowLED = 4;  // This is for the first yellow LED
int secondREDLED = 3;  // This is for the second red LED

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600); 
  
  // Wait for serial monitor to initialize
  delay(1000);  // Allow 1 second for Serial Monitor to be ready

  // Set LED pins as OUTPUT
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(secondREDLED, OUTPUT);
}

void loop() {
  // Blink Red LED
  digitalWrite(redLED, HIGH);
  delay(200);
  digitalWrite(redLED, LOW);
  delay(200);

  // Blink Green LED
  digitalWrite(greenLED, HIGH);
  delay(200);
  digitalWrite(greenLED, LOW);
  delay(200);

  // Blink Blue LED and print message when it's ON
  digitalWrite(blueLED, HIGH);  // Turn on blue LED
  Serial.println("Blue LED is blinking ON");  // Print message when blue LED turns on
  delay(500);  // Allow time for Serial Monitor to print
  digitalWrite(blueLED, LOW);  // Turn off blue LED
  Serial.println("Blue LED is blinking OFF");  // Print message when blue LED turns off
  delay(500);  // Allow time for Serial Monitor to print

  // Blink Yellow LED
  digitalWrite(yellowLED, HIGH);
  delay(200);
  digitalWrite(yellowLED, LOW);
  delay(200);

  // Blink Second Red LED
  digitalWrite(secondREDLED, HIGH);
  delay(200);
  digitalWrite(secondREDLED, LOW);
  delay(200);
}

