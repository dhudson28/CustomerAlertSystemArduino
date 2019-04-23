  A problem my work has had is when the owner is in the office and there is only one employee working, 
when its a slow day and the employee maybe in the back of the shop doing dishes and a customer walks in.
Since the dish washing sinks are behind a wall the employee has no way to know when someone walks in the shop or not. 

  To solve this problem I have one sensor facing the front of the register to detect a customer coming and going. There is also
one pointed by the door between the back of the shop to detect employee coming and going. When the employee goes into the back
the front sensor turns on to detect a customer. When the Front sensor detects a customer the arduino sends a signal to the wirless
doorbell so it rings until the employee comes back to the front of the shop. Once the customer and employee both leave the program restarts.

  At the current stage it just turns on an LED depending on the conditions it reads from the sensors, next step is to connect it to the doorbell switch, and use an ATMEGA328
and make it a more permanent device.
