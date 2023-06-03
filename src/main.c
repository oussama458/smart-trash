//biblio de servo & ultrasonic & GSM
#include <Servo.h>
#include <Ultrasonic.h>
#include <SoftwareSerial.h> // Library for using software serial communication
// configuration et variables de module GSM:
SoftwareSerial SIM900(7, 8); // Pins 7(RX), 8(TX) are used as used as software serial pins
String incomingData;   // for storing incoming serial data
String message = "";   // A String for storing the message

//objet servo d'overture et fermeture de poubelle:
Servo porte;
//objets ultasonic:
Ultrasonic presence(11,12);//trig et echo de capteur de presence
Ultrasonic niveau(4,5);//trig et echo de capteur de niveau
// distance mesure par le capteur ultrasonic:
int dist_presence = 0;
int dist_niveau = 0;
bool etatMsg50 = false;
bool etatMsg100 = false;
int etat_niveau = 0;
int niveau_max = 70; //niveau maximal de poubelle est 70 cm

void setup() {
  // frequence de moniteur série
    Serial.begin(9600);
  //pins de capteur de niveau:
    pinMode (4, OUTPUT);
    pinMode (5, OUTPUT);
  //pin de fumee
    pinMode (2, INPUT);
  //pins moteur:
    pinMode (3, INPUT);
    pinMode (6, INPUT);
  //pin de servo:
    porte.attach(7);
  // setup de GSM:
    SIM900.begin(19200); // baudrate for GSM shield
                     // set SMS mode to text mode
    SIM900.print("AT+CMGF=1\r");  
    delay(100);
                    // set gsm module to tp show the output on serial out
    SIM900.print("AT+CNMI=2,2,0,0,0\r"); 
    delay(100);
  
}




  
