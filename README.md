# Persian-Gazelle-Car-Cluster

This project focuses on designing a digital car cluster for the Persian Gazelle vehicle. The cluster interface is developed using TouchGFX for the graphical user interface (GUI) and is managed by FreeRTOS for real-time multitasking on an STM32 microcontroller board.

## Features

- **TouchGFX GUI**: A high-performance, customizable graphical interface with interactive elements.
- **FreeRTOS**: A real-time operating system for efficient task management and multitasking.
- **STM32 Integration**: Utilizes STM32 microcontroller for hardware interfacing and processing.

## Getting Started

To get started with this project, you'll need to set up your development environment and have the necessary hardware and software tools.

### Hardware Requirements

- STM32 microcontroller board (specific model depends on project requirements)
- Touchscreen display compatible with STM32
- Connection interfaces (e.g., CAN bus, GPIO) as per the car cluster requirements

### Software Requirements

- STM32CubeIDE or another compatible IDE for STM32 development
- TouchGFX Designer
- FreeRTOS
- STM32CubeMX (for peripheral configuration)
- Required STM32 HAL drivers and libraries

## Configuration

### TouchGFX Configuration

- **Design Files**: The TouchGFX design files are located in the `TouchGFX` directory. Use TouchGFX Designer to modify the GUI.
- **Assets**: Ensure that all graphical assets are properly included in the project.

### FreeRTOS Configuration

- **Task Management**: Tasks and their priorities are configured in the FreeRTOS configuration files located in the `FreeRTOS` directory.
- **Heap and Stack Sizes**: Adjust heap and stack sizes according to your application’s requirements.

### STM32 Configuration

- **Pin Configuration**: Configure GPIO pins, communication interfaces (e.g., CAN, UART) using STM32CubeMX.
- **Peripheral Settings**: Ensure that all necessary peripherals are enabled and correctly configured.

## Usage

1. **Upload the Firmware**

   Flash the firmware to the STM32 microcontroller using your preferred flashing tool.

2. **Connect the Hardware**

   Connect the touchscreen and other necessary peripherals to the STM32 board.

3. **Run the Application**

   Power up the STM32 board and observe the car cluster interface on the touchscreen.

## Contributing

Contributions are welcome! If you have suggestions or improvements, please fork the repository and create a pull request. For significant changes, open an issue to discuss your ideas first.

## Contact

For any questions or feedback, please contact:

- **Email**: Pooriaheydarianuni@gmail.com

