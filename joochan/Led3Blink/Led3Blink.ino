int button = 10;
int blue = 5;
int red = 6;
int orange = 7;
boolean current_button = LOW;
boolean last_button = LOW;
boolean led_on = false;

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
    current_button = digitalRead(button);
    
    if(last_button == LOW && current_button == HIGH)
    {
      led_on =! led_on;
    }

    last_button = current_button;
    digitalWrite(red, led_on);

    
          
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(orange, LOW);  
    delay(1000);          
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(orange, HIGH);
    delay(1000); 
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(orange, HIGH);
    delay(1000); 

  
  
                         
}
