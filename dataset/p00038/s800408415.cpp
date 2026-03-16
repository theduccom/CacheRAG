#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
  int card[5];

  while(scanf("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4]) != EOF){
    sort(card, card+5);
    int f = 0;
    bool st = 0;

    for(int i = 0 ; i < 4 ; i++){
      for(int j = i+1 ; j < 5 ; j++){
	if(card[i] == card[j]) f++;
      }
    }
    
    if(card[0]+1 == card[1] && card[0]+2 == card[2] &&
       card[0]+3 == card[3] && card[0]+4 == card[4] ||
       card[0] == 1 && card[1] == 10 && card[2] == 11 &&
       card[3] == 12 && card[4] == 13){
      st = 1;
    }
    
    if(f == 6) cout << "four card" << endl;
    else if(f == 4) cout << "full house" << endl;
    else if(f == 3 && st == 0) cout << "three card" << endl;
    else if(f == 2 && st == 0) cout << "two pair" << endl;
    else if(f == 1 && st == 0) cout << "one pair" << endl;
    else if(f <= 3 && st == 1) cout << "straight" << endl;
    else cout << "null" << endl;

  }
  return 0;
}