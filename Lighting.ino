int allThePins = 52;
int numHolds = 5;

//final declaration of route
int litPins[] = {38, 41, 25, 18, 5};

void setup()
{
  // put your setup code here, to run once:
  for(int i = 0 ; i < allThePins; i++)
  {
    pinMode(i+2, OUTPUT);
  }
}

void loop() 
{
  // put your main code here, to run repeatedly:
  lightFinalArray();
}

void lightFinalArray()
{
  for(int i = 0; i< numHolds; i++)
  {
    digitalWrite(litPins[i], HIGH);
  }
}
