#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> card(5);
  for(;;){
    if(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) == EOF) break;
    sort(card.begin(),card.end());
    int ans=0,x=card[0],y=1;
    for(int i=1; i<5; i++){
      if(x == card[i]) y++;
      else{
	if(y == 2) ans+=2;
	if(y == 3) ans+=3;
	if(y == 4) ans+=7;
	x = card[i];
	y = 1;
      }
    }
    if(y == 2) ans+=2;
    if(y == 3) ans+=3;
    if(y == 4) ans+=7;
    if(card[0] == card[1]-1 && card[1] == card[2]-1 && card[2] == card[3]-1 && card[3] == card[4]-1) ans+=10;
    if(card[0] == 1 && card[1] == 10 && card[2] == 11 && card[3] == 12 && card[4] == 13) ans+=10;
    if(ans == 0) cout <<"null"<<endl;
    if(ans == 2) cout <<"one pair"<<endl;
    if(ans == 4) cout <<"two pair"<<endl;
    if(ans == 3) cout <<"three card"<<endl;
    if(ans == 5) cout <<"full house"<<endl;
    if(ans == 7) cout <<"four card"<<endl;
    if(ans == 10) cout <<"straight"<<endl;
  }
  return 0;
}