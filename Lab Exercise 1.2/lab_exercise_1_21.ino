// C++ code
//


void setup() {

  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (int left  = 2, right = 12; left <=7; left++, right--){

    digitalWrite(left, HIGH);
    digitalWrite(right, HIGH);

    delay(500);

    digitalWrite(left, LOW);
    digitalWrite(right, LOW);
  }
}