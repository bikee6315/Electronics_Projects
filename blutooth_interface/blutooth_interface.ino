char data=0;
void setup() 
{
  Serial.begin(38400);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(9,0);
    
}

void loop() 
{
 if(Serial.available()>0)
 {
  data=Serial.read();
  Serial.println(data);
  if(data=='A')
  {
  digitalWrite(13,HIGH);
  }
  else if(data=='B')
  { 
  digitalWrite(12,HIGH);
 }
 else if(data=='C')
  { 
  digitalWrite(11,HIGH);
 }else if(data=='D')
  { 
  digitalWrite(10,HIGH);
 }else if(data=='E')
  { 
  digitalWrite(9,HIGH);
 }
  else if(data=='a')
  {
    digitalWrite(13,LOW);
  }
  else if(data=='b')
  {
    digitalWrite(12,LOW);
  }
  else if(data=='c')
  {
    digitalWrite(11,LOW);
  }
  else if(data=='d')
  {
    digitalWrite(10,LOW);
  }
  else if(data=='e')
  {
    digitalWrite(9,LOW);
  }
  }
}
 
