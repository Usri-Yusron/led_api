void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();

    // Membaca data dari serial dan memeriksa apakah data '2'
    if (data == '1') {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      Serial.println("Menyala");
    }
    else if (data == '2') {
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off (LOW is the voltage level)         
      Serial.println("Mati");
    }
  }
}
