int RIGHT = 2;
int LEFT = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(RIGHT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int cycle = 0;
  static uint8_t output = 0;

  if (cycle++ == 30) {
    output++;
  }

  analogWrite(RIGHT, output);
}
