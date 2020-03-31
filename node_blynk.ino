#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YourAuthToken"; // Enter the Auth token Recived on your mail after creating a new project on blynk platform//

char ssid[] = "YourNetworkName"; // Enter your wifi SSID//
char pass[] = "YourPassword";     //Enter your wifi password//

void setup()
{
  Serial.begin(9600);     //this will setup the connection to your blynk platform//
  Blynk.begin(auth, ssid, pass); // will check for autentication//
}

void loop()
{
  Blynk.run(); //the blynk application runs//
}
