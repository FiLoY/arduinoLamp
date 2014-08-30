#define LED_PINY 7
#define LED_PINR 8
#define LED_PING 9

int index = 0;
void setup()
{
  pinMode(LED_PINY,OUTPUT);
  pinMode(LED_PINR,OUTPUT);
  pinMode(LED_PING,OUTPUT);

  Serial.begin(9600);
  Serial.println(" HI ");

}

void loop()
{  
  while (Serial.available()) {
  index = Serial.read();
  Serial.println(index);
  if (index == 49) {
    analogWrite(LED_PINY,255);
  }
  if (index == 50) {
    analogWrite(LED_PINR,255);
  }
  if (index == 51) {
    analogWrite(LED_PING,255);
  }

  if (index == 52) {
    analogWrite(LED_PINY,0);
  }
  if (index == 53) {
    analogWrite(LED_PINR,0);
  }
  if (index == 54) {
    analogWrite(LED_PING,0);
  }

  }

  
}
