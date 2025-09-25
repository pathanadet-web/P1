#include <Arduino.h>
#include "f1.h"
#include "PubSubClient.h"
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Hallo");
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("loop");
  int x;
  x = Mul1(5, 4); // Ext lib call
  Serial.println(x);
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}