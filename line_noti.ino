#include <ESP8266WiFi.h>
const char* ssid = "33_wifi 2.4G";
const char* password = "0819630391";
int value1 = analogRead(A0); //sensorValue
//int value2 = digitalRead(D1);

void setup() {
    Serial.begin(9600);
    delay(10);
    // Connect to WiFi network
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
    delay(500);
    Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    // Print the IP address
    Serial.print("IP=");
    Serial.println(WiFi.localIP());
}
void loop() {
    value1 = analogRead(A0);
    //value2 = digitalRead(D1);
    if(value1 < 750){
      Serial.println(String(value1));
      Line_Notify(String(value1), "Your plant is fresh!");
     }else if (value1 > 750){
      Line_Notify(String(value1), "Your plant is thirsty!");
     }
    
    delay(5000);
}

const char* host = "maker.ifttt.com";
const char *privateKey = "dvIJUSH8hN2tIJxKxDq76K"; //แก้ เป็น key ของตัวเอง
const char *event = "plant"; // แก้เป็น event ของตัวเอง

void Line_Notify(String value1, String value2) {
    WiFiClientSecure client;
    client.setInsecure();
    const int httpPort = 443;
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    // We now create a URI for the request
    String url = "/trigger/";
    url += event;
    url += "/with/key/";
    url += privateKey;
    String message = "value1=" + String(value1)+ "&" +
                      "value2=" + String(value2);
    client.print(String("POST ") + url + " HTTP/1.1\r\n" +
    "Host: " + host + "\r\n" +
    "Content-Type: application/x-www-form-urlencoded\r\n" +
    "Content-Length: " + message.length() + "\r\n\r\n" +
    message + "\r\n");
    while (client.connected())
    {
      if (client.available())
      {
        String line = client.readStringUntil('\r');
        Serial.print(line);
      } else {
        delay(50);
      };
    }
}
