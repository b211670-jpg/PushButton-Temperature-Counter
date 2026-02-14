# Push Button Counter Based Temperature Monitoring System

## 📌 Project Overview
This project implements a temperature monitoring system using an LM35 sensor and Arduino UNO.  
A push button is integrated as a counter to manually track the number of temperature read events.

The system displays:
- Real-time temperature on a 16x2 LCD
- Button press count
- Serial Monitor output

## 🔧 Components Used
- Arduino UNO
- LM35 Temperature Sensor
- 16x2 LCD Display
- Push Button
- 10kΩ Resistor (Pull-down)
- Breadboard & Jumper Wires

## ⚙️ Working Principle

1. LM35 outputs voltage proportional to temperature (10mV per °C).
2. Arduino reads analog value from A0.
3. Temperature is calculated and displayed on LCD.
4. Push button increments a counter each time it is pressed.
5. Both temperature and counter value are shown on:
   - LCD Display
   - Serial Monitor

## ▶️ How to Run the Project

1. Connect components as per circuit diagram.
2. Open Arduino IDE.
3. Upload the code.
4. Open Serial Monitor at 9600 baud rate.
5. Observe temperature readings and counter increments.

## 📚 Applications
- Temperature Monitoring Systems
- Embedded System Learning
- IoT Foundations
- Industrial Event Counting

## 🚀 Future Improvements
- Add IoT cloud monitoring
- Store data in EEPROM
- Add buzzer alert for high temperature
- Convert to ESP32-based wireless system

## 👩‍💻 Author
Sanjana Kantepudi  
