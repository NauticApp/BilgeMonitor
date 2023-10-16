# NautiGuard BilgeMonitor

BilgeMonitor is a boat safety system designed to monitor the water level in the bilge of your vessel. It offers real-time water level tracking, automatic bilge pump control, and remote access via the NauticApp. Keep your vessel safe and dry with this essential marine monitoring solution.

## Features

- Real-time water level tracking
- Automatic bilge pump control
- Remote access via NauticApp
- User-friendly interface
- Customizable alerts and notifications


## Table of Contents

- [Overview](#overview)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Security Considerations](#security-considerations)
- [Contributing](#contributing)
- [License](#license)

## Overview

BilgeMonitor is a cost-effective solution for vessel owners to monitor water levels in their bilges. It utilizes an ESP32 microcontroller and an ultrasonic distance sensor to provide accurate readings. The system can be easily set up and customized to fit various vessel configurations.

## Hardware Requirements

- ESP32 microcontroller
- Ultrasonic distance sensor (HC-SR04 or similar)
- Soldering iron, wires etc

## Software Requirements

- VS code IDE with PlatformIO 

## Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/username/BilgeMonitor.git
   ```


## Getting Started

To get started with the NautiGuard BilgeMonitor, follow these steps:

### Connecting Ultrasonic Sensor to ESP32

1. **Ultrasonic Sensor Pins:**
   - VCC: Connect to 5V pin on ESP32.
   - Trig: Connect to any digital pin on ESP32 (e.g., GPIO 4).
   - Echo: Connect to any digital pin on ESP32 (e.g., GPIO 5).
   - GND: Connect to GND pin on ESP32.

2. **ESP32 Microcontroller:**
   - **5V Pin:** Connect to VCC of Ultrasonic Sensor.
   - **GND Pin:** Connect to GND of Ultrasonic Sensor.
   - **Digital Pins (Trig and Echo):** Connect to the respective Trig and Echo pins of the Ultrasonic Sensor.

3. **Power Source:**
   - Connect a power source (e.g., USB cable) to the ESP32 for providing power.

### Example Connection:

- Ultrasonic Sensor VCC -> ESP32 5V
- Ultrasonic Sensor Trig -> ESP32 GPIO 4
- Ultrasonic Sensor Echo -> ESP32 GPIO 5
- Ultrasonic Sensor GND -> ESP32 GND

### Software Setup with VS Code and PlatformIO

1. **Clone this Repository:**
   - Open VS Code and navigate to the directory where you want to clone the repository.
   - Open the terminal in VS Code and run the following command to clone the repository:
    
     ```
     git clone https://github.com/NauticApp/BilgeMonitor.git
     ```
Alternatively, you can download the ZIP file and extract its contents into the desired directory

2. **Open Project in VS Code:**
   - In VS Code, go to `File` > `Open Folder` and select the folder containing the cloned/unzipped repository.

3. **Install PlatformIO Extension:**
   - In VS Code, go to the Extensions view by clicking on the square icon on the sidebar or pressing `Ctrl+Shift+X`.
   - Search for "PlatformIO" and click "Install" on the PlatformIO IDE extension.

4. **Open PlatformIO:**
   - Click on the PlatformIO icon on the sidebar to open the PlatformIO home.
   - Under `PROJECT TASKS`, click on `Build` to compile the project.

5. **Configure ESP32 Environment:**
   - Open `platformio.ini` file in the root directory of your project.
   - Make sure the `platform` is set to `espressif32`.
   - Check if `board` is set to the appropriate ESP32 variant (`esp32dev`).

6. **Upload Code to ESP32:**
   - Connect your ESP32 board to your computer using a USB cable.
   - In PlatformIO, under `PROJECT TASKS`, click on `Upload` to flash the code to the ESP32.

7. **Monitor Serial Output:**
   - Open the Serial Monitor in PlatformIO to view the output from the ESP32.
   - Make sure the baud rate in your code and the Serial Monitor match (e.g., `Serial.begin(115200
 

 **Hardware Setup**:

1. - Ensure you have Visual Studio Code (VS Code) with the PlatformIO extension installed.

2. **Software Setup**:
   

   - Clone the Project Repository:
     - Open VS Code and navigate to the directory where you want to clone the project.
     - Open the terminal and run the following command to clone the project:
       ```bash
       git clone https://github.com/your-username/your-project.git
       ```

   - Open the Project in VS Code:
     - Open VS Code and click on "Open Folder."
     - Select the folder where you cloned the project.

   - Update Wi-Fi Credentials (in `main.cpp`):
     - Replace `your_WiFi_details` with your Wi-Fi SSID.
     - Replace `and_the_WiFi_password` with your Wi-Fi password.

3. **Compile and Upload the Code**:
   - Connect your ESP32 to your computer using a USB cable.
   - In VS Code, click on the PlatformIO icon on the left sidebar.
   - Click on "Open" to open the project.
   - Click on the "Upload" icon to compile and upload the code to your ESP32.

4. **Obtain ESP32 IP Address**:
   - Open the Serial Monitor in VS Code.
   - After successful connection to Wi-Fi, the ESP32 will print its local IP address (e.g., `192.168.0.61`).
   - Note down this IP address.

5. **Add a ESP32 Device in NauticApp**:

   - Open NauticApp on your Android device.
   - Navigate to the "Devices" section by going to the NauticGuard section (the last icon at the button left of the screen), there also the "Marine Engine Monitoring" section in the Marine Engineering Hub.
   - Click on the "Add ESP32 device" button to add a new device.
   - Enter a name for your device (e.g., "Engine Monitor").
   - Enter the ESP32 IP Address (e.g. 192.168.0.61/sensors), in the IP Address field, (this IP address can also be obtained from the ESP32 Serial Monitor).
   - Click "Save" to add the device.

6. **View Sensor Data in NauticApp**:
   - Once added, your ESP32 device will appear in the list of devices and you will now view the real-time sensor data from the ultrasonic distance sensor.

7. **Monitoring**:
   - You can now monitor the data from your ESP32 device in NauticApp, including distance measurements from the ultrasonic sensor.




4. [Troubleshooting](Documentation/Troubleshooting.md): 

- **Screen Refresh:**
  If you encounter any issues with the viewing, you can try refreshing the screen by rotating your phone. NauticApp has a feature that allows you to refresh the display by simply rotating the device.

- **Proper URL Format:**
  Ensure that you input the correct URL in the format `http://ip_address/sensors` when adding your ESP32 device. This is crucial for NauticApp to properly communicate with your device and retrieve the sensor data.

- **Check ESP32 Connectivity:**
  Double-check that your ESP32 is connected to the same network as your Android device. If the ESP32 is not properly connected to the network, NauticApp won't be able to communicate with it.

- **Verify ESP32 IP Address:**
  Make sure you have entered the correct IP address of your ESP32. You can obtain this address from the ESP32 Serial Monitor.

- **Check Wi-Fi Connection:**
  Ensure that your Android device is connected to a stable Wi-Fi network. If the Wi-Fi connection is weak or unstable, it may cause communication issues between NauticApp and the ESP32.

- **Inspect ESP32 Serial Monitor:**
  Monitor the ESP32 Serial Monitor for any error messages or logs. This can provide valuable information about the status and any potential issues with the ESP32.

- **Review ESP32 Code:**
  Double-check the ESP32 code to ensure there are no syntax errors or logical issues that may be causing communication problems.

- **Verify NauticApp Version:**
  Make sure you have the latest version of NauticApp installed on your Android device. Outdated versions may have compatibility issues.

- **Check Permissions:**
  Ensure that NauticApp has the necessary permissions to access the network on your Android device. This can be checked in your device's settings.

- **Restart Devices:**
  Sometimes, simply restarting both your Android device and the ESP32 can resolve connectivity issues.

- **Community Support:**
  If you continue to experience issues, consider reaching out to the NauticApp community or forums for additional help and insights.

## Contributing

We welcome contributions to the NautiGuard BilgeMonitor project. If you have ideas for improvements, bug reports.

## License

The NautiGuard BilgeMonitor is open source software released under the [MIT License](LICENSE).

**Non-Commercial Use Disclaimer**: While the code is under the MIT License, the primary intent is to support personal and non-commercial use. You are free to use, modify, and distribute the code for personal and non-commercial projects. For any commercial use or redistribution, please contact us for licensing arrangements.
