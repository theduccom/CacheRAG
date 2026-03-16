#include <bits/stdc++.h>
using namespace std;

int main()
{
  int card[5];
  while (scanf("%d, %d, %d, %d, %d", &card[0], &card[1], &card[2], &card[3], &card[4]) != EOF){
    sort(card, card + 5);
    int ct[14] = {0};
    for (int i = 0; i < 5; i++){
      ct[card[i]]++;
    }

    int a = 0;
    for (int i = 0; i < 4; i++){
      if (card[i] + 1 == card[i + 1]) a++;
    }
    if (card[4] == 13 && card[0] == 1) a++;
    if (a == 4){
      cout << "straight\n";
      continue;
    }
    int ma = 0;
    for (int i = 1; i < 14; i++) ma = max(ma, ct[i]);

    if (ma == 4) {
      cout << "four card\n";
      continue;
    }
    if (ma == 3){
      if (card[0] == card[1] && card[1] != card[2] || card[3] == card[4] && card[3] != card[2]){
        cout << "full house\n";
      }
      else {
        cout << "three card\n";
      }
      continue;
    }
    if (ma == 2){
      int b = 0;
      for (int i = 1; i < 14; i++) if (ct[i] == 2) b++;
      if (b == 2) cout << "two pair\n";
      else cout << "one pair\n";
      continue;
    }
    cout << "null\n";
  }
}