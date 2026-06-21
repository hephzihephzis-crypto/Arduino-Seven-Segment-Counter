# Arduino Seven-Segment Countdown Counter

## About the Project

This is my first Arduino project. In this project, I used an Arduino UNO and a single seven-segment LED display to show a countdown from 9 to 0. Each number is displayed for one second.

## Project Images

### Arduino Board
![Arduino Board](1%20Arduino%20board.jpg)

### Project Setup
![Project Setup](2%20Project%20setup.jpg)

### Seven-Segment Output
![Seven Segment Output](3%20Seven%20segment%20output.jpg)

## Components Used

- Arduino UNO
- Seven-segment LED display
- Breadboard
- Jumper wires
- USB cable
- Arduino IDE
- Resistors

## Working Principle

A seven-segment display contains LED segments used to display numbers. The Arduino digital pins are connected to the segments of the display. The program switches ON and OFF the required segments to display each number.

In this project, the display counts down from 9 to 0.

## Arduino Pins Used

Arduino digital pins 2 to 9 are connected to the display segments.

```cpp
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
