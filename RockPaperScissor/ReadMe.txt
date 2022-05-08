Hi, Welcome to Rock-Paper-Scissors Game!

In order to play Rock Paper Scissor game, go to Debug folder, and run RockPaperScissor.exe

In this game, I have used 4 classes.

1. Player
2. ComputerPlayer
3. ActualPlayer
4. RockPaperScissor

	Relationship amongst Player, ComputerPlayer and ActualPlayer class
		--------------------------------------------------------------------------------
		|			      Player Class (Base class)	             		|
		|				    /		\		     		|
		|				   /		 \		     		|
		|				  /	          \		     		|
		|			ComputerPlayer	   ActualPlayer		     		|
		|	               (Computer Class)	  (Class for actual user)    		|
		---------------------------------------------------------------------------------

In RockPaperScissor Class, I have kept 2 variables of Player type "computer" and "user".
During the intialization of RockPaperScissor class, we are creating objects of ComputerPlayer and ActualPlayer respectively.

When we begin sessin of RockPaperScissor class, we take input for both computer and user.

Now when we startPlaying the game, we keep on playing match between computer and user untill user decides not to play any other match.

For deciding a player's move, we using integer between 1-3

Rock - 1
Paper -2
Scissors - 3

Then when we start playing the game, for computer player, we generate an integer randomly between 1 to 3 and accordingly decide next move for computer.
Similarly for a actual user, we take input from user between 1 to 3.

On basis of computer and user move, we decide who will be winner for current match.


