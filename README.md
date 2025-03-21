# Li-Fi Text Communication Between Two Arduino Boards  

## 📌 Introduction  
Li-Fi (Light Fidelity) is a wireless communication technology that uses light waves instead of radio waves to transmit data. This project demonstrates a Li-Fi-based text communication system using two Arduino boards.  

## 🎯 Project Objective  
The goal of this project is to establish reliable and secure text communication between two Arduino-based devices using visible light signals. The system focuses on:  
- Efficient data transmission  
- Error handling  
- User-friendly interfaces  
- Optimization for real-world applications  

## 🔍 Problem Statement  
Wireless technologies like Wi-Fi often face congestion and security issues. Li-Fi offers a faster and more secure alternative, utilizing visible light for data transmission.  

## 💡 Proposed Solution  
This project implements a Li-Fi text communication system where:  
- One Arduino acts as a transmitter using an LED to send data.  
- Another Arduino acts as a receiver, using a photodiode to detect and decode the transmitted signals.  
- The system employs on-off keying (OOK) modulation for reliable transmission.  

## ⚙️ Working Principle  
1. **Transmission:** The LED modulates light intensity at high frequency based on binary data.  
2. **Reception:** The photodiode detects the changes in light intensity and converts them back into an electrical signal.  
3. **Decoding:** The signal is decoded into human-readable text.  

## 🚀 Features  
- Supports data rates up to 1 Mbps  
- Works in the visible light spectrum (400-800 THz)  
- Can transmit data up to 3 meters  

## ⚠️ Limitations  
- Requires a clear line of sight for communication  
- Performance is affected by ambient light  
- Limited transmission range (~3 meters)  

## 🔬 Testing & Results  
- Used two Arduino Uno boards with Li-Fi shields for communication.  
- The system successfully transmitted and received text messages using Li-Fi technology.  

## 🔮 Future Scope  
- Extending the range beyond 3 meters  
- Enhancing data security with encryption techniques  
- Improving resistance to ambient light interference  

## 📌 How to Use  
1. Upload the transmitter and receiver code to the respective Arduino boards.  
2. Connect the Li-Fi shield to each board.  
3. Place the boards in line-of-sight within a 3-meter range.  
4. Use the Arduino Serial Monitor to send and receive messages. 
