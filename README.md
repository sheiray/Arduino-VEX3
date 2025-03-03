# Arduino-VEX3
Exploration

Reminder in Arduino IDE: Open Serial Monitor

Hyperlinks
- Exploration of PlatformIO, <a href="https://github.com/MercersKitchen/Arduino-VEX3?tab=readme-ov-file#arduino-vex3">Text Here</a>
- VEX Ultrasonic, <a href="https://github.com/MercersKitchen/Arduino-VEX3/tree/main?tab=readme-ov-file#vex-ultrasonic">Text Here</a>
    - <a href="https://github.com/MercersKitchen/Arduino-VEX3/blob/main/Vex_ultrasound/Vex_ultrasound.ino">Code Here</a>
    - See Folder above for Images
- TBA, <a href="">Text Here</a>
- TBA, <a href="">Code Here</a>

---

# Exploration of PlatformIO
- Install PlatformIO as an Extension
- Create a New Project from a ```.ino file```
- Select Accurate Board (i.e. Arudino Uno)

When opening again
- In Folder ```scr``` open ```.ino```
- CAUTION: delete any main.cpp, etc
- Then open PlatformIO / Open / Navigate to platformio.ino / Open Project
- Switch to the Arduino Program
- Note: add ``` #include <arduino.h>``` library

To open a new Folder: File / New Window OR Open Folder

---

# Converting Arduino to VSC-PlatformIO
- In Github Desktop / Open VSC

### Notes to include
- New Project
- Choose Board
- Name File
- PlatformIO will create contents of folder
- copy .ino to source
- delete main.cpp
- execute by checkmark, arrow, and clicking the pulg in (serial monitor, in the PlatformIO bottom-picker)

---

# VEX Ultrasonic
- Black: ground
- Red: 5V Power

Trigger (OUTPUT): Orange, Pin-9

Echo (INPUT): Yellow, Pin-10

---

# VEX Shaft Encoder
- Black: ground
- Red: 5V (CAUTION current image illustrates 3.3V)

Outer White Wire = 3 Pin

Inner White Wire = 5 Pin

If Power connected to 3.3V program runs but sensor does not output or input distance

---

# To Include
- analog means reading a specifc number
- digital output means triggering a sensor between 0 & 1

- line sensor: what is the darkest number, what is the birghtest number
- how does this correspond in "real-life"

---

