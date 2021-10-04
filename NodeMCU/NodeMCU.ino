/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> // file untuk wifi 
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "Nxu2KnuyajwInWDNarIzoDrAPwbrvdFk"; // token yang dikirim dari blynk ke email masing masing

// Set password to "" for open networks.
char ssid[] = "A50s";
char pass[] = "kirana321";

void setup() // fungsi utama di jalankan email
{
  // Debug console
  Serial.begin(9600); // fungsi utama, di jalakan sekali

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan paswwordnya 

}

void loop() // fungsi utama di jalankan berulang kali
{
  Blynk.run(); /// perintah untuk mejalankan blynk
}
