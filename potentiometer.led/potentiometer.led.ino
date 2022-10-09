int pot=A0;
int angle;
int led;
void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
 angle = analogRead(pot);
 led=map(angle, 0, 1023, 0, 255);
 analogWrite(5, led);
 Serial.println(led);

}


 
