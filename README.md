# 3D Printer Relays

TODO: Add pictures, code, and diagrams

This program uses an Arduino to switch a 3D printer and its lights on and off from a Chromebook running [OctoPrint](https://octoprint.org/).

Materials:
* Arduino  
* Computer running OctoPrint
  * If you're using a Pi, there are probably better options for you using the Pi GPIO
* [https://smile.amazon.com/SunFounder-Channel-Optocoupler-Expansion-Raspberry/dp/B00E0NTPP4/](Relay board)
  * Note that you will be putting 120VAC through this relay! Be sure to print a case for it so no one gets hurt!
* Short IEC-320-C14 to IEC-320-C13 extension cable (or whatever connector your printer uses)