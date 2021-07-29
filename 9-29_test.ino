int sws[] = {2, 3, 4,5};
int leds[] = {8, 9, 10, 11};
int i;

void setup() {

  for (int i=0; i<4; i++)
  {
    pinMode(sws[i], INPUT);
    pinMode(leds[i], OUTPUT);
  }
  
}

void loop() 
{
  if(digitalRead(sws[0])==1)
  {
    for(int i =0; i<4; i++)
    {
      digitalWrite(leds[i], HIGH);
    }
    
    delay(1000);

    for(int i =0; i<4; i++)
    {
      digitalWrite(leds[i],LOW);
    }
    delay(1000);
  }

  else if(digitalRead(sws[1])==1)
  {
    for(i=0; i<4; i++)
    {
      digitalWrite(leds[i],HIGH);
      delay(1000);
    }
    for(i=0; i<4; i++)
    {
      digitalWrite(leds[i],LOW);
      delay(1000);
    }
  }

  else if(digitalRead(sws[2])==1)
  {
    for(i=4-1; i>=0; i--)
    {
      digitalWrite(leds[i],HIGH);
      delay(1000);
    }
    for(i=0; i<4; i++)
    {
      digitalWrite(leds[i], LOW);
      delay(1000);
    }
  }

  else if(digitalRead(sws[3])==1)
  {
    for(i=0; i<4; i++)
    {
      digitalWrite(leds[i], HIGH);
      delay(1000);
      digitalWrite(leds[i],LOW);
      delay(1000);
    }
  }

  else
  {
    for(i=0; i<4; i++)
    {
      digitalWrite(leds[i],LOW);
    }
  }
}
