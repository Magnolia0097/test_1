int button = 10;
int blue = 5;
int red = 6;
int orange = 7;


void setup() 
{
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(button, INPUT);

  digitalWrite(blue, HIGH);  
  digitalWrite(red, LOW);
  digitalWrite(orange, LOW);
  delay(1000);
}


void loop()
{        

  int button_on = digitalRead(button);
  Serial.println(button_on);

  if(button_on == HIGH)
  {
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(orange, LOW);  
    delay(500);          
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(orange, HIGH);
    delay(500); 
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(orange, HIGH);
    delay(500); 
      
  }                
}
