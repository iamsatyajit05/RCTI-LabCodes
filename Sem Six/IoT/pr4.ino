#define RED_LED 2
#define GREEN_LED 3
#define BLUE_LED 4
#define RED_PUSH 8
#define GREEN_PUSH 9
#define BLUE_PUSH 10

int redBtnState = 0, greenBtnState = 0, blueBtnState = 0;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_PUSH, INPUT);
  pinMode(GREEN_PUSH, INPUT);
  pinMode(BLUE_PUSH, INPUT);
}

void loop()
{
  redBtnState = digitalRead(RED_PUSH);
  greenBtnState = digitalRead(GREEN_PUSH);
  blueBtnState = digitalRead(BLUE_PUSH);
  
  if (redBtnState == LOW)
    digitalWrite(RED_LED, HIGH);
  else
    digitalWrite(RED_LED, LOW);

  if (greenBtnState == LOW)
    digitalWrite(GREEN_LED, HIGH);
  else
    digitalWrite(GREEN_LED, LOW);

  if (blueBtnState == LOW)
    digitalWrite(BLUE_LED, HIGH);
  else
    digitalWrite(BLUE_LED, LOW);
}
