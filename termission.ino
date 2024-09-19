// Define the pin number connected to the LED module
const int LED_PIN = 7;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Define the text to transmit
  String myText = "nikhil is here";

  // Loop through each character in the text
  for (int i = 0; i < myText.length(); i++) {
    // Get the ASCII code of the current character
    int asciiCode = myText.charAt(i);

    // Convert the ASCII code to binary and store it in an array
    int binaryCode[8];

    for (int j = 0; j < 8; j++) {
      binaryCode[7 - j] = (asciiCode >> j) & 1;
    }

    // Set the start bit to 1
    binaryCode[0] = 1;

    // Transmit the binary code as a series of LED pulses
    for (int j = 0; j < 8; j++) {
      digitalWrite(LED_PIN, binaryCode[j]);
      delay(10);
    }

    // Turn off the LED
    digitalWrite(LED_PIN, LOW);

    // Delay before transmitting the next character
    delay(100);
  }
}
