//biblio de servo & ultrasonic & GSM
#include <Servo.h>
#include <Ultrasonic.h>
#include <SoftwareSerial.h> // Library for using software serial communication
// configuration et variables de module GSM:
SoftwareSerial SIM900(7, 8); // Pins 7(RX), 8(TX) are used as used as software serial pins
String incomingData;   // for storing incoming serial data
String message = "";   // A String for storing the message
