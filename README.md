# 🌱 Automatic Plant Watering Reminder System

## 🏰 Concept
This project is an **automatic plant watering reminder system** that alerts the user when the soil moisture level is too low. The system consists of:
- 💧 **Soil Moisture Sensor** – Monitors the soil condition.
- 📝 **LCD Display** – Shows moisture level readings.
- 🟦 **LED Indicator** – Lights up when the plant needs water.

---

## 🛠 Components Required

| Component | Function |
|-----------|----------|
| **Arduino UNO** | Processes sensor data |
| **LCD Display (I2C)** | Displays moisture readings & messages |
| **Soil Moisture Sensor** | Detects moisture level in the soil |
| **LED** | Indicates when watering is needed |
| **100Ω Resistor** | Limits current to the LED |
| **Breadboard** | Simplifies circuit connections |
| **Connecting Wires** | For making electrical connections |

---

## 🔌 Pin Connections

### 📊 LCD Display Connection (I2C)
- **SDA** → A4 (Arduino)
- **SCL** → A5 (Arduino)
- **VCC** → 5V (Arduino)
- **GND** → GND (Arduino)

### 🌱 Soil Moisture Sensor Connection
- **Analog Output (AO)** → A0 (Arduino)
- **VCC** → 5V (Arduino)
- **GND** → GND (Arduino)

### 🔦 LED Connection
- **Cathode (-)** → GND
- **Anode (+)** → D13 (Arduino) **via a 100Ω Resistor**

---

## ⚡ Moisture Threshold (θcrit) – When Plants Start Feeling Stress
### What is it?
The **critical soil moisture threshold (θcrit)** is the point below which plants **experience water stress**, affecting their ability to take up water.

### Why is it important?
- 🌱 **Better Irrigation** – Helps water plants at the right time.
- 📈 **Drought Prediction** – Assists in forecasting drought effects.
- 🌍 **Environmental Models** – Improves accuracy in water availability predictions.

### Factors Affecting θcrit
| Factor | Effect |
|--------|--------|
| **Climate** | Dry regions → Lower threshold, Humid regions → Higher threshold |
| **Leaf Area** | More leaves → Higher water need |
| **Soil Type** | Different soil textures retain water differently |
| **Weather Conditions** | Hot/dry weather → Higher threshold |

### Example Values
| Plant | θcrit Value (m³/m³) |
|--------|------------------|
| **Global Average** | 0.19 |
| **Spring Maize** | 0.2 |
| **Winter Wheat** | 0.4 |
| **Drip-Irrigated Soybean** | 0.2 - 0.5 |

### How is it Measured?
- ✨ **Eddy Covariance Flux Towers** – Measures evapotranspiration.
- 📊 **Soil Moisture Sensors** – Track moisture at different depths.


## 📚 Conclusion
This **Automatic Plant Watering Reminder System** is a simple yet effective way to keep plants healthy.
With an LCD display and LED indicator, users get **real-time feedback** on moisture levels. Future upgrades like **automated watering, wireless connectivity, and smart app integration** can enhance this project into a **fully autonomous plant care system**! 🌿🚀

