#include <iostream>
 using namespace std;
 #include "Tic_Tac_Toe.h"
 
 Tic_Tac_Toe::Tic_TacToe()
{
}
 
 void Tic_Tac_Toe::displayBoard()
 {
 cout << endl << endl;
 cout << "  " << s[1] << " | " << s[2] << " | " << s[3] << endl;
 cout << " -----------" << endl;
 cout << "  " << s[4] << " | " << s[5] << " | " << s[6] << endl;
 cout << " -----------" << endl;
 cout << "  " << s[7] << " | " << s[8] << " | " << s[9] << endl << endl;
 }
 void Tic_Tac_Toe::placement()
{
 cout << "Which row please? " << endl;
 cin >> row;
 cout << "Which column please? " << endl;
 cin >> col;
 
 if (row == 1)
 {
  if (col == 1)
  {
   s[1] = 'X';
  }
  else if (col == 2)
  {
   s[2] = 'X';
  }
  else if (col == 3)
  {
   s[3] = 'X';
  }
 }
 else if (row == 2)
 {
  if (col == 1)
  {
   s[4] = 'X';
  }
  else if (col == 2)
  {
   s[5] = 'X';
  }
  else if (col == 3)
  {
   s[6] = 'X';
  }
 }
 else if (row == 3)
 {
  if (col == 1)
  {
   s[7] = 'X';
  }
  else if (col == 2)
  {
   s[8] = 'X';
  }
  else if (col == 3)
  {
   s[9] = 'X';
  }
 }
}