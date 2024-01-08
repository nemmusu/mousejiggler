# MouseJiggler for Arduino Leonardo

This program is a MouseJiggler for Arduino Leonardo. A MouseJiggler is a device that keeps mouse activity to prevent the computer from entering sleep or standby mode. This program moves the mouse back and forth along a 2-pixel path every 6.2 seconds.

## How to upload a .ino file to Arduino Leonardo

### Requirements

- Arduino IDE installed on your computer
- An Arduino Leonardo board
- A USB cable to connect the board to your computer

### Procedure

1. **Connect the Arduino board to your computer**  
   Use the USB cable to connect the Arduino Leonardo board to your computer.

2. **Open the .ino file with Arduino IDE**  
   Launch Arduino IDE and go to `File > Open`. Navigate to the `mousejiggler.ino` file you want to upload and click `Open`.

3. **Select the board and port**  
   Go to `Tools > Board` and select `Arduino Leonardo`. Then, go to `Tools > Port` and select the port that your Arduino Leonardo is connected to.

4. **Upload the mousejiggler.ino file to the board**  
   Click on `Sketch > Upload` or use the `Ctrl+U` keyboard shortcut. The IDE will compile the code and upload it to the Arduino Leonardo board.

5. **Verify the upload**  
   You can verify if the upload was successful by checking the IDE's output console. You should see a message saying `Upload complete`.

6. **Usage**  
   Now, every time you connect the Arduino Leonardo to your PC, the MouseJiggler program will automatically run. Remember that MouseJiggler is designed to simulate mouse movement and can be used to prevent your PC from going into standby mode or lock screen due to inactivity.