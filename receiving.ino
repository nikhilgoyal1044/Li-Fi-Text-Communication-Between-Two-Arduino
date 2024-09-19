int MessageToSend = 0;  // Variable to store the message to be sent

void setup() {
  pinMode(10, OUTPUT);  // Pin connected to the LED
  Serial.begin(9600);  // Set serial port for communication
}

void loop() {
  // Get input from the user (you can replace this with your preferred method)
  Serial.println("Enter a message (1-7): ");
  while (Serial.available() == 0) {
    // Wait for input
  }

  MessageToSend = Serial.parseInt();

  if (MessageToSend >= 1 && MessageToSend <= 7) {
    sendMessage(MessageToSend);
  } else {
    Serial.println("Invalid message. Please enter a number between 1 and 7.");
  }
}

void sendMessage(int message) {
  int i = 0;

  while (i < message) {
    digitalWrite(10, HIGH);  // Turn on the LED
    i++;
    delay(1010);
  }

  digitalWrite(10, LOW);
  delay(1000);

  // Optional: Print a message to Serial Monitor indicating message transmission completion
  Serial.println("Message transmission complete");
}