#include <ESP32Servo.h>
Servo strum;
Servo lift;

int posVal = 60;
int servoPin1 = 15;
int servoPin2 = 22;
int delay_val = 0;
String pattern;

#define STRUMMER_MIN_ANGLE 60
#define STRUMMER_MAX_ANGLE 150
#define RAISED_ANGLE 68
#define PLAY_ANGLE 74

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  strum.setPeriodHertz(50); // standard 50 hz servo
  strum.attach(servoPin1, 500, 2500); // attaches the servo on servoPin to the servo object

  lift.setPeriodHertz(50); // standard 50 hz servo
  lift.attach(servoPin2, 500, 2500); // attaches the servo on servoPin to the servo object
  lift.write(PLAY_ANGLE);
  int bpm = 102;
  pattern = "DDUUDU";
  delay_val = calculateDelay(bpm);

}

void upStrum()
{
  for (int pos = STRUMMER_MIN_ANGLE; pos <= STRUMMER_MAX_ANGLE; pos += 1)
  {
    strum.write(pos);
    delay(2);
  }
  delay(delay_val);
}

void downStrum()
{
  for (int pos = STRUMMER_MAX_ANGLE; pos >= STRUMMER_MIN_ANGLE; pos -= 1)
  {
    strum.write(pos);
    delay(2);
  }
  delay(delay_val);
}

int calculateDelay(int bpm) {
  return (int)(((1.0/(bpm/60.0))/2.0)*1000.0);
}

void loop() {
  lift.write(PLAY_ANGLE);
  for (int parser = 0; parser < pattern.length(); parser++)
  {
    char currentStrum = pattern.charAt(parser);
    if (currentStrum == 'D')
    {
      downStrum();
      if (parser + 1 < pattern.length())
      {
        if (pattern.charAt(parser+1) == 'D')
        {
          lift.write(RAISED_ANGLE);
          upStrum();
          lift.write(PLAY_ANGLE);
        }
      }
    }
    else
    {
      upStrum();
      if (parser + 1 < pattern.length())
      {
        if (pattern.charAt(parser+1) == 'U')
        {
          lift.write(RAISED_ANGLE);
          downStrum();
          lift.write(PLAY_ANGLE);
        }
      }
    }
  }
}
