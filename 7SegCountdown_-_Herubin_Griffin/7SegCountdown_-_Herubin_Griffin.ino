/*

Corey Herubin
Korbin Griffin

This circuit works to use potentiometer
input to give a specific number, from 0 to 9

4.30.19 (Project Changed from RGB LED to 7-segment display)

Credit to:

https://www.instructables.com/id/Arduino-
Potentiometer-Analog-Input-Tinkercad/

http://www.circuitbasics.com/arduino-7
-segment-display-tutorial/

https://www.youtube.com/watch?v=kEVdZ1i4Uok

https://www.tinkercad.com/things/35B6H70nFK1-copy-of-7-segment-
display-test-common-anode/editel?tenant=circuits

Public Domain

*/

int sensorValue = 0;

// Set pins for each segment

int E = 12;
int D = 11;
int C = 10;
int DP = 9;
int B = 8;
int A = 7;
int F = 6;
int G = 5;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(E, OUTPUT); // Define output pins
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop()
{
  // Set sensor input pun, read potentiometer data
  
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  // Number display code
  
  if ((sensorValue > 0) & (sensorValue <= 100)) { // 0
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
  }

  if ((sensorValue >= 101) & (sensorValue <= 200)) { // 1
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }

  if ((sensorValue >= 201) & (sensorValue <= 300)) { // 2
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
  }

  if ((sensorValue >= 301) & (sensorValue <= 400)) { // 3
    digitalWrite(E, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
  }

  if ((sensorValue >= 401) & (sensorValue <= 500)) { // 4
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  
  if ((sensorValue >= 501) & (sensorValue <= 600)) { // 5
    digitalWrite(E, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  
  if ((sensorValue >= 601) & (sensorValue <= 700)) { // 6
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }  

  if ((sensorValue >= 701) & (sensorValue <= 800)) { // 7
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
  
  if ((sensorValue >= 801) & (sensorValue <= 900)) { // 8
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  
  if (sensorValue >= 901) { // 9
    digitalWrite(E, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(DP, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }

}
