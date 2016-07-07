#include "IRremote.h"
#include "IRelectra.h"

int main()
  IRsend irsend(D3);
  IRelectra e(&irsend);
  e.SendElectra(POWER_OFF, MODE_COOL, FAN_LOW, 22, SWING_ON, SLEEP_OFF);

  return 0;
}