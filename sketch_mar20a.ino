//         AUTOMATIC SOIL MONITORING SYSTEM 

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define led_pin 13   // LED ANODE CONNECTED TO DIGITAL PIN 13
#define sensor_pin A0  // SOIL MOISTURE SIGNAL PIN TO ANALOG INPUT A0
#define THRESHOLD 438 // FOUND BY EXPERIMENTING WITH DIFFERENT SOIL AT DIFFERENT CONDITIONS 

bool needsWater = false; 

// INITIALISING OBJECTS ,VARIABLES 
LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
    Serial.begin(9600);

    pinMode(led_pin, OUTPUT);

    lcd.init();       // LCD INITIALISE 
    lcd.backlight();  // Turn on LCD backlight
    lcd.setCursor(0, 0);
    lcd.print("SOIL MONITORING"); // PRINT EXPERIMENT 
    delay(1000);
    lcd.clear();
    Serial.println("Soil Monitoring");
}

void loop() {

    int soilMoisture = analogRead(sensor_pin);  // Read soil moisture value

    // DISPLAYING SENSOR VALUES
    Serial.print("Soil Moisture : "); 
    Serial.println(soilMoisture); // Display soil moisture value

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Soil Moisture: ");
    lcd.print(soilMoisture); // Display soil moisture value

    // NOW MONITORING PART 
    if (soilMoisture < THRESHOLD) { // If soil is dry
        needsWater = true;
        lcd.setCursor(0, 1);
        lcd.print("...Pour me!!!...");
        digitalWrite(led_pin, HIGH); // Turn on LED
    }
    else if (needsWater) { // If water was needed before and is now sufficient
        lcd.setCursor(0, 1);
        lcd.print("...Thank you!..."); 
        digitalWrite(led_pin, LOW); // Turn off LED
        delay(3000);  // Keep the message displayed for 3 seconds
        needsWater = false;
    }

    delay(1000); // Delay before the next sensor reading
}
