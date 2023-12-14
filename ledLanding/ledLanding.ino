//LED Landing Pad
// :D

int delayCommon = 200;
int delaySeqSwitch = 500;
int cycleAmount = 0;

void setup()
{
  //Set pin modes
  for (int setPin = 0; setPin <= 11; setPin++)
  {
    pinMode(setPin, OUTPUT);
  }
  //Test Sequence (All lights operating, every startup)
  for (int testWritePin = 0; testWritePin <= 11; testWritePin++)
  {
    digitalWrite(testWritePin, HIGH);
    delay(100);
    digitalWrite(testWritePin, LOW);
    delay(100);
  }
}

void loop()
{

  innerCircle();
  outerCircle();

}

void innerCircle()

{
  // Define amount of cycles of phase 2 (2)
  for (cycleAmount = 0; cycleAmount <= 1; cycleAmount++)
  {
    //Spin sequence
    for (int innerRing = 4; innerRing <= 11; innerRing++)
    {
      digitalWrite(innerRing, HIGH);
      delay(50);
      digitalWrite(innerRing, LOW);
      delay(50);
    }
  }
}

void outerCircle()
{
  // Light up outer ring
  for (int outerRing = 0; outerRing <= 3; outerRing++) {
    digitalWrite(outerRing, HIGH);
  }

  delay(20);

  //Shut down outer ring
  for (int outerRing = 0; outerRing <= 3; outerRing++) {
    digitalWrite(outerRing, LOW);
  }

}
