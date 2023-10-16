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
 

3. [Usage Guide](Documentation/Usage_Guide.md): Explore the features and capabilities of the BilgeMonitor, including real-time monitoring, alert customization, and remote access.

4. [Troubleshooting](Documentation/Troubleshooting.md): If you encounter any issues, refer to this section for troubleshooting tips and solutions.


## Contributing

We welcome contributions to the NautiGuard BilgeMonitor project. If you have ideas for improvements, bug reports, or want to contribute to the development, please check our [Contribution Guidelines](CONTRIBUTING.md).

## License

The NautiGuard BilgeMonitor is open source software released under the [MIT License](LICENSE).

**Non-Commercial Use Disclaimer**: While the code is under the MIT License, the primary intent is to support personal and non-commercial use. You are free to use, modify, and distribute the code for personal and non-commercial projects. For any commercial use or redistribution, please contact us for licensing arrangements.
