# Ultrasonic_DistanceAlarmSystem
Ultrasonic distance measurement system with LCD display and buzzer alert, built using Arduino.

# Ultrasonic Distance Alarm System 🚨

This project is an **Arduino-based distance measuring and alarm system**.  
It uses an **HC-SR04 Ultrasonic Sensor** to measure the distance of objects.  
The measured distance is shown on a **16x2 LCD Display**, and if the object comes too close, a **buzzer alarm** is triggered.

---

## 📷 Overview
- Measures distance using ultrasonic waves.  
- Displays the distance in **centimeters** on an LCD screen.  
- Sounds a buzzer alarm when an object is closer than a set threshold.  

---

## 🛠 Components Required
- Arduino Uno (or compatible board)  
- HC-SR04 Ultrasonic Sensor  
- 16x2 LCD Display (with potentiometer for contrast)  
- Buzzer  
- Breadboard & Jumper Wires  

---

## ⚡ Circuit Connections

### Ultrasonic Sensor (HC-SR04)
- VCC → 5V  
- GND → GND  
- Trig → Pin 9  
- Echo → Pin 8  

### Buzzer
- Positive → Pin 10  
- Negative → GND  

### LCD (16x2)
- RS → Pin 2  
- EN → Pin 3  
- D4 → Pin 4  
- D5 → Pin 5  
- D6 → Pin 6  
- D7 → Pin 7  
- VCC → 5V  
- GND → GND  
- VO (Contrast) → Middle pin of Potentiometer  

---

## 💻 Code
The Arduino sketch is available in this repository:  
[`Ultrasonic_DistanceAlarmSystem.ino`](Ultrasonic_DistanceAlarmSystem.ino)

---

## 🚀 How to Run
1. Assemble the circuit as shown above.  
2. Open the code in Arduino IDE.  
3. Select your board (Arduino Uno) and the correct COM port.  
4. Upload the code to your Arduino.  
5. The LCD will display the distance, and the buzzer will beep if an object is too close.  

---

## 📌 Applications
- Parking assistance system  
- Obstacle detection for robots  
- Security alarm system  

---

## 🖼 Example Output
LCD screen example when object is near: