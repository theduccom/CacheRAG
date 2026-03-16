#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
  int hand[5];
  for(;;){
    if(scanf("%d,%d,%d,%d,%d",&hand[0],&hand[1],&hand[2],&hand[3],&hand[4]) == EOF){break;}
    sort(hand,hand+5);
    int p = 0;
    for(int i=0; i<5; i++){
      int x = 0;
      for(int j=i+1; j<5; j++){
	if(hand[i] == hand[j]){x++;}
      }
      if(x == 1){p+=1;}
      if(x == 2){p+=3;}
      if(x == 3){p+=5;}
      i+=x;
    }
    if(p == 0){
      if(hand[1] == hand[0]+1 && hand[2] == hand[1]+1 && hand[3] == hand[2]+1 && hand[4] == hand[3]+1){p = 6;}
      if(hand[0] == 1 && hand[1] == 10 && hand[2] == 11 && hand[3] == 12 && hand[4] == 13){p = 6;}
    }
    if(p == 0){cout <<"null"<<endl;}
    else if(p == 1){cout <<"one pair"<<endl;}
    else if(p == 2){cout <<"two pair"<<endl;}
    else if(p == 3){cout <<"three card"<<endl;}
    else if(p == 4){cout <<"full house"<<endl;}
    else if(p == 5){cout <<"four card"<<endl;}
    else if(p == 6){cout <<"straight"<<endl;}
  }
  return 0;
}