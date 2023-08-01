
int a=4;
int b=5;
int c=6;
int d=7;
int e=8;
int f=9;
int g=10;
int reading=0;
void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
if (Serial.available()>0){
char reading=Serial.read();
switch(reading)
{case '0':digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
 digitalWrite(g,0);
  break;
  case '1':
  digitalWrite(a,0);
  digitalWrite(b,1);
digitalWrite(c,1);
 digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
 digitalWrite(g,0);
  break;
  case '2':
  digitalWrite(a,1);
digitalWrite(b,1);
 digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
  break;
  case '3':
  digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
 digitalWrite(e,0);
digitalWrite(f,0);
 digitalWrite(g,1);
  break;
  case '4':
  digitalWrite(a,0);
  digitalWrite(b,1);
digitalWrite(c,1);
 digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
 digitalWrite(g,1);
  break;
  case '5':
  digitalWrite(a,1);
 digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
 digitalWrite(e,0);
digitalWrite(f,1);
 digitalWrite(g,1);
  break;
  case'6':
  digitalWrite(a,1);
 digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
 digitalWrite(g,1);
  break;
  case '7':
  digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
 digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
 digitalWrite(g,0);
  break;
  case '8':
  digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
 digitalWrite(g,1);
  break;
  case'9':
  digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
 digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
 digitalWrite(g,1);
 break;}
  
  
  
  
}}


