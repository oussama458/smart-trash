# Smart Trash
This project includes an Arduino code for controlling a servo motor, an ultrasonic sensor, and a GSM module for a smart trash bin system.

## Components Used
* Arduino board <br>
* Servo motor <br>
* Ultrasonic sensor <br>
* GSM module (SIM900) <br>
## Installation
1. Clone the repository or download the Arduino code file. <br>
2. Open the code in the Arduino IDE. <br>
3. Connect the Arduino board to your computer. <br>
4. Install the required libraries: Servo, Ultrasonic, SoftwareSerial. <br>
5. Upload the code to the Arduino board. <br>
## Circuit Diagram 
Include a circuit diagram of the connections between the components if available.

## Usage
1. Make sure all the components are properly connected. <br>
2. Power on the Arduino board. <br>
3. Open the serial monitor to view the output. <br>
4. The code will monitor the presence of objects using the ultrasonic sensor. <br>
5. If an object is detected within a certain range, the servo motor will open the trash bin. <br>
6. After a delay, the servo motor will close the trash bin. <br>
7. The code also monitors the fill level of the trash bin using another ultrasonic sensor. <br>
8. If the fill level reaches a certain threshold, a message will be sent using the GSM module. <br>
9. Adjust the threshold values and timings in the code according to your requirements. <br>
