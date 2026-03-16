#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
  int hand[5];
  while(scanf("%d,%d,%d,%d,%d",&hand[0],&hand[1],&hand[2],&hand[3],&hand[4])!=EOF){
    int c[13] = {0};
    int v[5] = {0};
    bool f = true;
    sort(hand,hand+5);
    for(int i = 0; i < 5; i++){
      if(hand[0] != hand[i] - i){
	f = false;
      }
      c[hand[i] - 1]++;
    }
    if(c[0] && c[9] && c[10] && c[11] && c[12]){
      f = true;
    }
    for(int i = 0; i < 13; i++){
      v[c[i]]++;
    }

    if(v[4]) puts("four card");
    else if(v[3] && v[2]) puts("full house");
    else if(f) puts("straight");
    else if(v[3]) puts("three card");
    else if(v[2] == 2) puts("two pair");
    else if(v[2]) puts("one pair");
    else puts("null");
  }
}