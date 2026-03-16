#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
  int i,j,k,l;
  int card[5];
  int poker_hand;
  bool flag;

  while(true){
    poker_hand=0;
    for(i=0;i<5;i++){
      if(scanf("%d,",&card[i])==EOF)return(0);
    }
    sort(card,card+5);
    for(i=0;i<4;i++){
      if(card[i]==card[i+1])poker_hand=1;
    }
    if(card[0]==card[1]&&card[2]==card[3])poker_hand=2;
    if(card[0]==card[1]&&card[3]==card[4])poker_hand=2;
    if(card[1]==card[2]&&card[3]==card[4])poker_hand=2;
    for(i=0;i<3;i++){
      if(card[i]==card[i+1]&&card[i]==card[i+2])poker_hand=3;
    }
    flag=true;
    for(i=1;i<5;i++){
      if(card[i]!=card[0]+i)flag=false;
    }
    if(flag)poker_hand=4;
    flag=true;
    if(card[0]==1&&card[1]==10){
      for(i=1;i<4;i++){
	if(card[i+1]!=card[1]+i)flag=false;
      }
    }else{
      flag=false;
    }
    if(flag)poker_hand=4;
    if(card[0]==card[1]&&card[0]==card[2]&&card[3]==card[4])poker_hand=5;
    if(card[0]==card[1]&&card[2]==card[3]&&card[2]==card[4])poker_hand=5;
    if(card[0]==card[3])poker_hand=6;
    if(card[1]==card[4])poker_hand=6;

    
    switch (poker_hand) {
      case 0:
	printf("null\n");
	break;
      case 1:
	printf("one pair\n");
	break;
      case 2:
	printf("two pair\n");
	break;
      case 3:
	printf("three card\n");
	break;
      case 4:
	printf("straight\n");
	break;
      case 5:
	printf("full house\n");
	break;
      case 6:
	printf("four card\n");
	break;
    }
  }
  return(0);
}