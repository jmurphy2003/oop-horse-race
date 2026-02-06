Updated Horse Race Game

Overview

The goal of this project was to rewrite the original Horse Race game using an object-oriented approach. The game works the same as before: there are 5 horses (0–4) racing along a track which is 15-characters. Each turn, each horse flips a coin and moves forward one space if it gets heads. The race continues until one or more horses reach the end.

This version uses classes, header files, and a Makefile to organize the program.

How the Program Works
	•	The program uses two main classes: Horse and Race.
	•	Horse class:
	•	Keeps track of the horse’s ID and current position.
	•	Handles movement, printing its lane, and checking for a win.
	•	Race class:
	•	Contains an array of Horse objects.
	•	Controls the flow of the race.
	•	Runs the main loop and checks for winners.

Each turn:
	•	The user presses Enter to continue.
	•	Each horse has a 50/50 chance to move forward.
	•	The track is printed showing the current position of all horses.
	•	The race ends when a horse reaches the end of the track.

Algorithms

Horse::advance(trackLength)
	1.	Flip a coin (0 or 1).
	2.	If the coin is 1 and the horse is not at the end, increase its position by 1.

Race::run()
    1. Print starting lanes for all horses.
    2. While no horse has won:
        • Wait for the user to press Enter.
        • Call advance() for each horse.
        • Call printLane() for each horse.
        • Check if any horse is a winner.
    3. Print the winning horse and end the program.