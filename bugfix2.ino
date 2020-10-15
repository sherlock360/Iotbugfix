#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "aaa";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "bbbb";
char pass[] = "cccc";

int a = 16;// Connect the relay to GPIO5 (Pin D1 on the NodeMCU)
int b=5;//d1
int c=4;//d2
int d=0;//d3
int e=2;//d4
int f=14;//d5
int g=12;//d6
int h=13;//d7
int i=15;//d8

BLYNK_WRITE(V1)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(a, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(a, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V2)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(b, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(b, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V3)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(c, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(c, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V4)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(d, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(d, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V5)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(e, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(e, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V6)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(f, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(f, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V7)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(g, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(g, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V8)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(h, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(h, LOW);           // Turn the relay Off
  }
}
BLYNK_WRITE(V9)                             // This code is triggered when the App button widget on V1 changes state
{
  int pinValue = param.asInt();             // Assign incoming value from pin V1 to a variable

  if (pinValue==1)                          // Do this if it was an On command from the Button widget in the App
  {
    digitalWrite(i, HIGH);          // Turn the relay On
  }
  else         // Else do this if it was an Off command from the Button widget in the App
  {
    digitalWrite(i, LOW);           // Turn the relay Off
  }
}




void setup()
{
  digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
  
  pinMode(a, OUTPUT); 
 
  digitalWrite(a, HIGH);                
 pinMode(b, OUTPUT);                  
    
  pinMode(c, OUTPUT);              
 
  pinMode(d, OUTPUT);                  
  digitalWrite(d, HIGH);
  pinMode(e, OUTPUT);                 
  digitalWrite(e, HIGH); 
  pinMode(f, OUTPUT);                  // Define the relay pin as an output
  digitalWrite(f, HIGH); 
  pinMode(g, OUTPUT);                  // Define the relay pin as an output
  digitalWrite(g, HIGH); 
  pinMode(h, OUTPUT);                  // Define the relay pin as an output
  digitalWrite(h, HIGH); 
  pinMode(i, OUTPUT);                  // Define the relay pin as an output
  digitalWrite(i, HIGH);          
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

}

void loop()

{
  Blynk.run();
}
