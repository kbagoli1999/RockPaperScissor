#include <bits/stdc++.h>

using namespace std;

class Player
{
	public:
		virtual int make_next_move() = 0;
		virtual void set_player_name(string name);
		virtual string get_player_name();
	private:
		string player_name;
};


class ComputerPlayer : public Player
{
public:
	virtual int make_next_move();
};

class ActualPlayer : public Player
{
public:
	virtual int make_next_move();
};

/*
*		---------------------------------------------------------
*		|			      Player Class (Base class)				|
*		|					/		\							|
*		|				   /		 \							|
*		|				  /	          \							|
*		|		ComputerPlayer	   ActualPlayer					|
*		|		(Computer Class)	 (Class for actual user)	|
*		---------------------------------------------------------
*/

class RockPaperScissor
{
	public:
		RockPaperScissor()
		{
			//Creating new instance of ComputerPlayer and ActualPlayer class
			computer = new ComputerPlayer();
			player = new ActualPlayer();
		};

		~RockPaperScissor()
		{
			//Freeing up allocated memory to computer and player object
			delete computer;
			delete player;
		}

		virtual void beginSession();
		virtual void startPlaying();
		virtual int decideWinner(int computerMove, int playerMove);
	private:
		Player* computer;
		Player* player;
};
