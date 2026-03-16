#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
  int hand[5], card[13];
  int yaku[5];
  while(scanf("%d,%d,%d,%d,%d",
              hand+0, hand+1, hand+2, hand+3, hand+4) == 5) {

    memset(card, 0, sizeof(int) * 13);
    memset(yaku, 0, sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
      card[hand[i]-1]++;
    int j = 0;
    for (int i = 0; i < 13; i++)
      if (card[i] != 0)
        yaku[j++] = card[i];
    sort(yaku+0, yaku+j);

    j--;
    if (yaku[j] == 4) {
      cout << "four card" << endl;
    } else if (yaku[j] == 3 && yaku[j-1] == 2) {
      cout << "full house" << endl;
    } else if (yaku[j] == 3) {
      cout << "three card" << endl;
    } else if (yaku[j] == 2 && yaku[j-1] == 2) {
      cout << "two pair" << endl;
    } else if (yaku[j] == 2) {
      cout << "one pair" << endl;
    } else {
      sort(hand+0, hand+5);
      if ((hand[0]+1 == hand[1] &&
           hand[1]+1 == hand[2] &&
           hand[2]+1 == hand[3] &&
           hand[3]+1 == hand[4]) ||
          (hand[0] == 1 &&
           hand[1] == 10 &&
           hand[2] == 11 &&
           hand[3] == 12 &&
           hand[4] == 13))
        cout << "straight" << endl;
      else
        cout << "null" << endl;
    }
  }
  return 0;
}