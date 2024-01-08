# Readme

[Readme: Italian](./README_IT.md)

[Readme: English](./README.md)

# MouseJiggler for ATmega32u4

This program is a MouseJiggler for ATmega32u4. A MouseJiggler is a device that keeps the mouse activity to prevent the computer from entering sleep or standby mode. This program moves the mouse back and forth on a 2 pixel path every 6.2 seconds.

## How to upload the `mousejiggler.ino` file to ATmega32u4

### Requirements

- Arduino IDE installed on your computer
- A board with ATmega32u4 (e.g. Arduino Leonardo, Micro, Pro Micro)
- A USB cable to connect the board to your computer

### Procedure

1. **Connect the ATmega32u4 board to your computer**  
   Use the USB cable to connect the ATmega32u4 board to your computer.

2. **Open the `mousejiggler.ino` file with Arduino IDE**  
   Launch Arduino IDE and go to `File > Open`. Navigate to the `mousejiggler.ino` file and click `Open`.

3. **Select the board and port**  
   Go to `Tools > Board` and select `ATmega32u4`. Then, go to `Tools > Port` and select the port to which your ATmega32u4 is connected.

4. **Upload the `mousejiggler.ino` file to the board**  
   Click `Sketch > Upload` or use the `Ctrl+U` key combination. The IDE will compile the code and upload it to the ATmega32u4 board.

5. **Verify the upload**  
   You can verify if the upload was successful by checking the IDE's output console. You should see a message saying `Upload complete`.

6. **Usage**  
   Now, every time you connect the ATmega32u4 to your PC, the MouseJiggler program will automatically run. Remember that MouseJiggler is designed to simulate mouse movement and can be used to prevent your PC from entering standby or lock screen mode due to inactivity.