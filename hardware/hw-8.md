IR (infrared resistor)
- 3 terminal - Ground, vcc, d0
- Variation:
- active
  - sensor emit light and get result within its field
  - Short distance, more accuracy
  - Real world usage: automatic door, aircon’s remote, car park sensor
- passive (PIR)
  - Get infrared from objects, emit nothing
  - Medium distance, less accurate
  - Real world usage: detect living being and turn on / off the light


Ultrasonic:
- 4 terminal
  - ground
  - vcc
  - d0 (output)
  - d1 (input)
- Distance & object detector & larger distance
- Mechanism:
  <br/>emit certain frequency and calculate the time for feedback to measure distance (just like bat)
More accurate

<br/>They usually combined to increase the usefulness:
- IR + Ultrasonic: enhanced obstacle detection - short range motion detector, used in waiter robot
- PIR + Ultrasonic: enhanced motion detection - distance to moving object - security
- PIR + IR: detect movement & obstacle

<br/>IR + ultrasonic: for smart home
- PIR check if there is a person
- Ultrasonic: distance - ensure if there are people in room besfore turn on all device (Aircon / light)