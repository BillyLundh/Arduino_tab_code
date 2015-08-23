// Test tab funtionality

#include "methods.cpp"

turnonled obj;
turnledoff obj2;

void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  obj.init();
  obj2.init();
}
