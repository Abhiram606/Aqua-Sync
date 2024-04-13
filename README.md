# Aqua-Sync
Aqua-Sync addresses the growing need for efficient plant care solutions in modern agriculture and urban gardening. Traditional watering methods often lead to overwatering or underwatering, resulting in wasted water and suboptimal plant health. Aqua-Sync solves these challenges by automating the watering process based on real-time soil moisture data. This innovative system ensures healthier plant growth, reduces water wastage, and simplifies plant care. 

## Components Used in Aqua-Sync:

1. **Microcontroller:** Manages the overall system operation and interfaces with sensors and actuators.
2. **Soil Moisture Sensor:** Measures soil moisture levels to determine watering requirements.
3. **Water Pump:** Dispenses water to plants based on sensor data and user-defined settings.
4. **Relay module:**  acts as a switch that controls the  activation and deactivation of water pump.
5. **Power Supply:** A 9V battery or alternative power source is used to supply power to Arduino and other components.
6. **Pipe:** A connected system for transporting water from pump to plants.

## How to Use the Aqua-Sync Code:

1. **Download the Arduino IDE:**
   - If you don't already have the Arduino IDE installed on your computer, download and install it from the official Arduino website: [Arduino Software](https://www.arduino.cc/en/software).

2. **Open the Arduino IDE:**
   - Launch the Arduino IDE on your computer.

3. **Open the Aqua-Sync Code:**
   - Navigate to the location where you cloned or downloaded the Aqua-Sync code repository.
   - Open the main Arduino sketch file  in the Arduino IDE.

4. **Configure the Arduino Board:**
   - Select the appropriate Arduino board from the "Tools > Board" menu in the Arduino IDE.
   - Choose the correct port for your Arduino board from the "Tools > Port" menu.

5. **Connect Components to Arduino:**
   - Refer to the circuit diagram provided in the project documentation.
   - Connect the soil moisture sensor, water pump, realy module, and other components to the corresponding pins on the Arduino board as per the circuit diagram.

6. **Upload the Code to Arduino:**
   - Connect your Arduino board to your computer using a USB cable.
   - Click the "Upload" button (right arrow icon) in the Arduino IDE to compile and upload the Aqua-Sync code to your Arduino board.

7. **Monitor Serial Output (Optional):**
   - If you want to view the real time moisture level of the soil, open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor) to view the output.

8. **Stopping the Code Execution:**
   - To stop Aqua-Sync's code execution, disconnect the power supply or press the reset button on the Arduino board.








