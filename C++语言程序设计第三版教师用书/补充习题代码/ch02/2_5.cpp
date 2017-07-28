//2_5.cpp
#include <iostream>
using namespace std;

enum Choice {ROCK, CLOTH, SCISS};
enum Winner {Play1, Play2, Tie}; 

int main()
{ int n;
  Choice cho1, cho2;
  Winner winner;
  cout << "Choose rock (0), cloth (1), or Sciss (2):" << endl;
  cout << "Player No. 1: ";
  cin >> n;
  cho1 = Choice(n);
  cout << "Player No. 2: ";
  cin >> n;
  cho2 = Choice(n);
  if (cho1 == cho2) winner = Tie;
  else if (cho1 == ROCK)
    if (cho2 == CLOTH) winner = Play2;
    else winner = Play1;
  else if (cho1 == CLOTH)
    if (cho2 == SCISS) winner = Play2;
    else winner = Play1;
  else 
    if (cho2 == ROCK) winner = Play2;
    else winner = Play1;
  if (winner == Tie) cout << "\tTied!\n";
  else if (winner == Play1) cout << "\tPlayer No. 1 wins." <<endl;
  else cout << "\tPlayer No. 2 wins." << endl;
  return 0;
}
/*
程序运行结果为：
Choose rock (0), cloth (1), or Sciss (2):
Player No. 1: 1
Player No. 2: 2
        Player No. 2 wins.
*/