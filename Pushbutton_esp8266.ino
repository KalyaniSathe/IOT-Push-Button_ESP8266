#include <cogcloudesp8266.h>

String ssid = "akconnect";
String pass = "Ramnagarnashik";

String apikey = "a3c9a60e6a684b1227efcf486f20a21d";

void setup ()
{
  pinMode(D1,INPUT);
  
  Serial.begin(9600);
  cogInitCloud (ssid,pass,apikey);
  //cogBindPin (D1,"PUSH");
}

void loop ()
{

  cogAppLoop();
  int x = digitalRead(D1);
  cogStoreCloudVariable("PUSH",String(x));
  

  
  
}
