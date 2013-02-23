Flippant
========
What is Flippant?
------------------
Flippant is a voice-based home automation system that aims to easily control home based appliances using the user's voice. 
Its meant to be primarily for the elderly and the disabled. It aims to offer :

1.    Voice Paswords.
2.    Basic control of home appliances starting from a fan, a tubelight,etc.
3.    Easily extensible to other developers to take the system forward.
                    

Tech being used 
----------------
The tech being used for the project is

+    Arduino Uno
+    EasyVR shield for voice recognition and interfacing with the Arudino Uno

EasyVR is responsible for direct input from a microphone and sends strings to the Arduino Uno which is involved in processing data
and directing commands to the respective appliances. The project is in its initial stages but a proposed heuristic is to have a table
containing the word list of various appliances to be controlled and matching the incoming string with a bunch of hard coded commands
in the program. 

Where are we? 
--------------
As of 20/2/2012
This project is my final year project and would develop periodically over the next 2 months. 
Right now we've experimented with a bunch of LEDs and possible iterations to simulate simaeltenous loads on the system.

