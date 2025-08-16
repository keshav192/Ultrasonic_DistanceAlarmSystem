# Ultrasonic Distance Alarm System 🚨

This Arduino project uses an *HC-SR04 Ultrasonic Sensor* to measure distance and trigger a *buzzer alarm* if an object is too close. The measured distance is displayed on a *16x2 LCD display*.

---

## 📷 Project Overview
- *Ultrasonic Sensor (HC-SR04)* measures distance in centimeters.  
- *LCD (16x2)* shows the distance in real time.  
- *Buzzer* alerts when an object is detected within a certain threshold.  

---

## 🛠 Components Required
- Arduino Uno (or compatible board)  
- HC-SR04 Ultrasonic Sensor  
- 16x2 LCD Display  
- 10kΩ Potentiometer (for LCD contrast)  
- Buzzer  
- Jumper wires & Breadboard  

---

## ⚡ Circuit Connections
- *Ultrasonic Sensor*  
  - VCC → 5V  
  - GND → GND  
  - Trig → Pin 9  
  - Echo → Pin 8  

- *Buzzer*  
  - Positive → Pin 10  
  - Negative → GND  

- *LCD (16x2)*  
  - RS → Pin 2  
  - EN → Pin 3  
  - D4 → Pin 4  
  - D5 → Pin 5  
  - D6 → Pin 6  
  - D7 → Pin 7  
  - VCC → 5V  
  - GND → GND  
  - Potentiometer center pin → V0 (LCD contrast)  

---

## 💻 Arduino Code
The main sketch is included in this repo:  
[Ultrasonic_DistanceAlarmSystem.ino](Ultrasonic_DistanceAlarmSystem.ino)

Key Features:
- Continuously measures distance.  
- Displays distance on LCD.  
- Activates buzzer if object < threshold distance.  

---

## 🚀 How to Run
1. Connect the circuit as per the connections above.  
2. Upload the code to your Arduino Uno using Arduino IDE.  
3. Open Serial Monitor (optional) to debug.  
4. Move an object near the sensor — buzzer will beep if too close.  

---

## 📌 Applications
- Parking assistance system  
- Obstacle detection for robots  
- Security alarms  

---

## 🖼 Example Output
LCD Display Example:


---

## 🤝 Contribution
Feel free to fork this repo, improve the code (like adding adjustable threshold), and create a pull request.

---

## 📜 License
This project is open-source and available under the *MIT License*.