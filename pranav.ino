void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}


int Total= 300;
int Next= 1000;
void Pranav(int wait)
{
digitalWrite(LED_BUILTIN, HIGH);
delay(wait);
digitalWrite(LED_BUILTIN, LOW);
delay(250);  
}

void loop() {
  // put your main code here, to run repeatedly:

  //P
  Pranav(Total);
  Pranav(Total *3 );
  Pranav(Total * 3);
  Pranav(Total);
  delay(Next);

  //R
  Pranav(Total);
  Pranav(Total*3);
  Pranav(Total);
  delay(Next);

  //A
  Pranav(Total);
  Pranav(Total * 3);
  delay(Next);

  //N
  Pranav(Total * 3);
  Pranav(Total);
  delay(Next);

  //A
    Pranav(Total);
  Pranav(Total * 3);
  delay(Next);

  //V
  Pranav(Total);
  Pranav(Total);
  Pranav(Total);
  Pranav(Total * 3);
  delay(Next);
  
  
  

}void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}


int Total= 300;
int Next= 1000;
void Pranav(int wait)
{
digitalWrite(LED_BUILTIN, HIGH);
delay(wait);
digitalWrite(LED_BUILTIN, LOW);
delay(250);  
}

void loop() {
  // put your main code here, to run repeatedly:

  //P
  Pranav(Total);
  Pranav(Total *3 );
  Pranav(Total * 3);
  Pranav(Total);
  delay(Next);

  //R
  Pranav(Total);
  Pranav(Total*3);
  Pranav(Total);
  delay(Next);

  //A
  Pranav(Total);
  Pranav(Total * 3);
  delay(Next);

  //N
  Pranav(Total * 3);
  Pranav(Total);
  delay(Next);

  //A
    Pranav(Total);
  Pranav(Total * 3);
  delay(Next);

  //V
  Pranav(Total);
  Pranav(Total);
  Pranav(Total);
  Pranav(Total * 3);
  delay(Next);
  
  
  

}
