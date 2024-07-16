 Define constants for PIR sensor and LED
const int pirPin = 2;    PIR sensor output connected to digital pin 2
const int ledPin = 3;    LED connected to digital pin 3

unsigned long previousMillis = 0;    Stores the last time we checked for motion
const long interval = 2000;          Interval in milliseconds (2 seconds)
bool motionDetected = false;         Flag to track motion detection status

void setup() {
  pinMode(pirPin, INPUT);    PIR sensor pin as input
  pinMode(ledPin, OUTPUT);   LED pin as output
  Serial.begin(9600);        Initialize serial communication for debugging
}

void loop() {
  unsigned long currentMillis = millis();    Current time in milliseconds
  int motionValue = digitalRead(pirPin);     Read PIR sensor output
  
   Check if 2 seconds have passed since last check
  if (currentMillis - previousMillis = interval) {
    previousMillis = currentMillis;    Update last checked time
    
     Check motion status
    if (motionValue == HIGH) {
       Motion detected
        motionDetected = true;
        digitalWrite(ledPin, HIGH);    Turn on LED
        Serial.println(Motion detected!LED ON);
    } else {
       No motion detected
        motionDetected = false;
        digitalWrite(ledPin, LOW);     Turn off LED
        Serial.println(No motion detectedLED OFF);
    }
  }
}
