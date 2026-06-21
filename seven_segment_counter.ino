const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

const byte digitMatrix[10][8] = {
  {0, 0, 0, 0, 0, 0, 1, 1},  // 0
  {1, 0, 0, 1, 1, 1, 1, 1},  // 1
  {0, 0, 1, 0, 0, 1, 0, 1},  // 2
  {0, 0, 0, 0, 1, 1, 0, 1},  // 3
  {1, 0, 0, 1, 1, 0, 0, 1},  // 4
  {0, 1, 0, 0, 1, 0, 0, 1},  // 5
  {0, 1, 0, 0, 0, 0, 0, 1},  // 6
  {0, 0, 0, 1, 1, 1, 1, 1},  // 7
  {0, 0, 0, 0, 0, 0, 0, 1},  // 8
  {0, 0, 0, 0, 1, 0, 0, 1}   // 9
};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  // Count from 9 to 0
  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < 8; j++) {
      digitalWrite(segmentPins[j], digitMatrix[i][j]);
    }
    delay(1000);
  }
}