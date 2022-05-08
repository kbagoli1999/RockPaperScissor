/*************************************************************************
*
* ADOBE CONFIDENTIAL
* ___________________
*
*  (c) Copyright 2014 Adobe Systems Incorporated
*  All Rights Reserved.
*
* NOTICE:  All information contained herein is, and remains
* the property of Adobe Systems Incorporated and its suppliers,
* if any.  The intellectual and technical concepts contained
* herein are proprietary to Adobe Systems Incorporated and its
* suppliers and may be covered by U.S. and Foreign Patents,
* patents in process, and are protected by trade secret or copyright law.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Adobe Systems Incorporated.
**************************************************************************/

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

class RockPaperScissor
{
	public:
		RockPaperScissor()
		{
			computer = new ComputerPlayer();
			player = new ActualPlayer();
		};

		~RockPaperScissor()
		{
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
