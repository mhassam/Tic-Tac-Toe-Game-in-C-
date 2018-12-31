#include <iostream>
 using namespace std;
 #include "Player.h"
 
 void Player::getName(string name)
 {
  playerName = name;
 }
  int Player::choose(int player)
  {
  int random_integer = rand(); 
  if (random_integer%2)
    {
	  cout << playerName << " goes first." << endl;
	}
  else
    {
	  cout << playerName << " goes first." << endl;
	}
  }