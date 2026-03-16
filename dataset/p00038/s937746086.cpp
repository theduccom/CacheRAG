#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int card[5];
map<int, int> table;

int main() {
  while (1) {
    table.clear();
    if (scanf("%d", &card[0]) != 1) break;
    for (int i=1; i<5; i++) {
      getchar();
      scanf("%d", &card[i]);
    }

    sort(card, card+5);
    for (int i=0; i<5; i++) {
      table[card[i]]++;
    }
  
    int num_straight = 0;
    for (int i=0; i<4; i++) {
      num_straight += (card[i+1] == card[i] + 1);
    }
  
    if (table[card[0]] == 4 || table[card[4]] == 4) puts("four card");
    else if (table.size() == 2) puts("full house");
    else if (num_straight + (card[0] == 1 && card[4] == 13 && card[1] != 2) >= 4) puts("straight");
    else if (table[card[1]] == 3 || table[card[3]] == 3) puts("three card");
    else if (table[card[1]] + table[card[3]] == 4) puts("two pair");
    else if (table.size() < 5) puts("one pair");
    else puts("null");
  }
}