
void setup() {
// initialize serial communications at 9600 bps:
Serial.begin(9600);

delay(10000);
// print the serial data to GSM
//Serial.print("ATD+2547xxxxxxxxxxx;" );
SendMessage();
// change here to call a number using SIM800
// wait 10 seconds before the next loop
delay(10000);
//Serial.print("ATH" ); // hold the call
}

void SendMessage()
{
  Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  Serial.println("AT+CMGS=\"+2547xxxxxxxxxxx\"\r"); // Replace x with mobile number
  delay(1000);
  Serial.println("I am SMS from GSM Module");// The SMS text you want to send
  delay(100);
  Serial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}

void loop() {
}
