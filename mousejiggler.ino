#include <Mouse.h>

void setup()
{
  Mouse.begin();
}

void loop()
{
  delay(1000);
  while(true) { 
    Mouse.move(2,0,0);
    delay(100);
    Mouse.move(-4,0,0);
    delay(100);
    Mouse.move(2,0,0);
    delay(6000);
  }
}