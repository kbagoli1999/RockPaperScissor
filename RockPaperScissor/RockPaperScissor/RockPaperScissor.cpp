// RockPaperScissor.cpp : This file contains the methods for following classes : RockPaperScissor, Player, ComputerPlayer and ActualUser

#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RockPaperScissor.h"

using namespace std;

//  Method to begin Rock Paper Scissor Game
void RockPaperScissor::beginSession()
{
    cout << "Hi, welcome to ROCK PAPER SCISSOR GAMES\n";
    
    //  Taking input player name
    computer->set_player_name("Computer");
    cout << "Please enter you name\n";
    string name;
    cin >> name;
    player->set_player_name(name);
}

//  If Computer wins, return 0
//  If Player wins, return 1
//  If it is a tie, return 2
int RockPaperScissor::decideWinner(int computerMove, int playerMove)
{
    //  Rock : 1
    //  Paper : 2
    //  Scissor : 3
    if (computerMove == playerMove)
    {
        return 2;
    }
    switch (playerMove)
    {
        case 1:
            //  Player : Rock
            return(computerMove == 3 ? 1 : 0);
        case 2:
            //  Player : Paper
            return(computerMove == 1 ? 1 : 0);
        default:
            //  Player : Scissor
            return(computerMove == 2 ? 1 : 0);
    }
}

void RockPaperScissor::startPlaying()
{
    int continuePlayingSession = 1;
    bool playerWon;
    int computerMove, playerMove;

    while (continuePlayingSession)
    {
        //  Compute computer's next move(Rock, Paper, or Scissor)
        computerMove = computer->make_next_move();

        //  Compute player's next move(Rock, Paper, or Scissor)
        cout << "Please select your next move!\n";
        cout << "Select 1 for Rock\nSelect 2 for Paper\nSelect 3 for Scissor\n";
        playerMove = player->make_next_move();

        //  Decide winner of this match
        playerWon = RockPaperScissor::decideWinner(computerMove, playerMove);

        //  Printing out the winner of match
        switch(playerWon)
        {
            case 0:
                cout << computer->get_player_name() + " won!\n";
                break;
            case 1:
                cout << player->get_player_name() + " won!\n";
                break;
            default:
                cout << "It's a tie between " + computer->get_player_name() + " and " + player->get_player_name()+"\n";
        }

        //  Asking user for another match!
        cout << "Do you want to play another round?\n";
        cout << "Please input 1 to keep playing or 0 to stop playing\n";
        cin >> continuePlayingSession;
        continuePlayingSession == 1 ? 1 : 0;
    }
}

//  This methods sets player name
void Player::set_player_name(string name)
{
    player_name = name;
}

//  This method retrieves player name
string Player::get_player_name()
{
    return player_name;
}

//This method computes computer player next move randomly
int ComputerPlayer::make_next_move()
{
    srand(time(NULL)); // Using this function in order to get random integers for every round

    int randNum = (rand() % 3) + 1;
    return randNum;
}

//  This method asks user for their next move
//  If user enter's invalid input, we again pitch user to enter valid move
int ActualPlayer::make_next_move()
{
    int num;
    cin >> num;
    if (num < 1 || num >3) 
    {
        cout << "You entered incorrect input\n";
        cout << "Please select following numbers for you choice\nRock : 1\nPaper: 2\nScissor: 3\n";
        num = ActualPlayer::make_next_move();
    }
    return num;
}