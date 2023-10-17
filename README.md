# NautiGuard: BilgeMonitor

**NautiGuard is part of [NauticApp](https://nauticapp.github.io/) and it is a collection of marine IoT (Internet of Things) projects designed to enhance the boating experience for users. Each project within NautiGuard focuses on specific aspects of marine monitoring and safety. These projects are open source, meaning users can build and customize their own solutions using readily available components.**

**BilgeMonitor** is one of the NautiGuard projects, it is a boat safety system designed to monitor the water level in the bilge of your vessel. It offers real-time water level tracking, automatic bilge pump control, and remote access via [NauticApp](https://play.google.com/store/apps/details?id=io.dcoldeira.nauticapp&pli=1). Keep your vessel safe and dry with this essential marine monitoring solution.

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
- [Getting Started](#getting-started)
  - [Connecting Ultrasonic Sensor to ESP32](#connecting-ultrasonic-sensor-to-esp32)
  - [Software Setup with VS Code and PlatformIO](#software-setup-with-vs-code-and-platformio)
  - [Example Connection](#example-connection)
- [Troubleshooting](#troubleshooting)
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



## Getting Started

### Connecting Ultrasonic Sensor to ESP32

- Ultrasonic Sensor Pins:

   - VCC: Connect to 5V pin on ESP32.
   - Trig: Connect to any digital pin on ESP32 (e.g., GPIO 4).
   - Echo: Connect to any digital pin on ESP32 (e.g., GPIO 5).
   - GND: Connect to GND pin on ESP32.

- ESP32 Microcontroller:

   - 5V Pin: Connect to VCC of Ultrasonic Sensor.
   - GND Pin: Connect to GND of Ultrasonic Sensor.
   - Digital Pins (Trig and Echo): Connect to the respective Trig and Echo pins of the Ultrasonic Sensor.

- Power Source:

   - Connect a power source (e.g., USB cable) to the ESP32 for providing power.




## Software Setup with VS Code and PlatformIO
- Clone this Repository:
   - Open VS Code and navigate to the directory where you want to clone the repository.
   - Open the terminal in VS Code and run the following command to clone the repository:

```bash
Copy code
git clone https://github.com/NauticApp/BilgeMonitor.git
```

Alternatively, you can download the ZIP file and extract its contents into the desired directory

1) Open Project in VS Code:

- In VS Code, go to File > Open Folder and select the folder containing the cloned/unzipped repository.

2) Install PlatformIO Extension:

- In VS Code, go to the Extensions view by clicking on the square icon on the sidebar or pressing Ctrl+Shift+X.
- Search for "PlatformIO" and click "Install" on the PlatformIO IDE extension.

3) Open PlatformIO:

- Click on the PlatformIO icon on the sidebar to open the PlatformIO home.
- Under PROJECT TASKS, click on Build to compile the project.

4) Configure ESP32 Environment:

- Open platformio.ini file in the root directory of your project.
- Make sure the platform is set to espressif32.
- Check if board is set to the appropriate ESP32 variant (esp32dev).

5) Upload Code to ESP32:

- Connect your ESP32 board to your computer using a USB cable.
- In PlatformIO, under PROJECT TASKS, click on Upload to flash the code to the ESP32.

6) Monitor Serial Output:

- Open the Serial Monitor in PlatformIO to view the output from the ESP32.
- Make sure the baud rate in your code and the Serial Monitor match (e.g., Serial.begin(115200)).

### Example Connection:

- Ultrasonic Sensor VCC -> ESP32 5V
- Ultrasonic Sensor Trig -> ESP32 GPIO 4
 Ultrasonic Sensor Echo -> ESP32 GPIO 5
- Ultrasonic Sensor GND -> ESP32 GND

## Troubleshooting

- Screen Refresh:
If you encounter any issues with the viewing, you can try refreshing the screen by rotating your phone. NauticApp has a feature that allows you to refresh the display by simply rotating the device.

- Proper URL Format:
Ensure that you input the correct URL in the format http://ip_address/sensors when adding your ESP32 device. This is crucial for NauticApp to properly communicate with your device and retrieve the sensor data.

- Check ESP32 Connectivity:
Double-check that your ESP32 is connected to the same network as your Android device. If the ESP32 is not properly connected to the network, NauticApp won't be able to communicate with it.

- Verify ESP32 IP Address:
Make sure you have entered the correct IP address of your ESP32. You can obtain this address from the ESP32 Serial Monitor.

- Check Wi-Fi Connection:
Ensure that your Android device is connected to a stable Wi-Fi network. If the Wi-Fi connection is weak or unstable, it may cause communication issues between NauticApp and the ESP32.

- Inspect ESP32 Serial Monitor:
Monitor the ESP32 Serial Monitor for any error messages or logs. This can provide valuable information about the status and any potential issues with the ESP32.

- Review ESP32 Code:
Double-check the ESP32 code to ensure there are no syntax errors or logical issues that may be causing communication problems.

- Verify NauticApp Version:
Make sure you have the latest version of NauticApp installed on your Android device. Outdated versions may have compatibility issues.

- Check Permissions:
Ensure that NauticApp has the necessary permissions to access the network on your Android device. This can be checked in your device's settings.

- Restart Devices:
Sometimes, simply restarting both your Android device and the ESP32 can resolve connectivity issues.

- Community Support:
If you continue to experience issues, consider reaching out to the NauticApp community or forums for additional help and insights.

## Contributing
We welcome contributions to the NautiGuard BilgeMonitor project. If you have ideas for improvements, bug reports, or other feedback, feel free to open an issue or create a pull request.

## License
The NautiGuard BilgeMonitor is open source software released under the MIT License.

**Non-Commercial Use Disclaimer:** While the code is under the MIT License, the primary intent is to support personal and non-commercial use. You are free to use, modify, and distribute the code for personal and non-commercial projects. For any commercial use or redistribution, please contact us for licensing arrangements.