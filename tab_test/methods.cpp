#include <Arduino.h>


class turnonled
{
  public:
    void init()
    {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(1000);
    }
};


class turnledoff
{
  public:
  void init()
  {
    digitalWrite(13, LOW);
    delay(2000);
  }
};
