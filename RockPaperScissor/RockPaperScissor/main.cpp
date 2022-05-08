// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include "RockPaperScissor.h"

using namespace std;

int main()
{
    RockPaperScissor newSession;
    newSession.beginSession();
    newSession.startPlaying();
    _getch();
}