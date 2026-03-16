#include<iostream>
using namespace std;
int main(){
  int c[5];
  char cm;
  while(cin>>c[0]>>cm>>c[1]>>cm>>c[2]>>cm>>c[3]>>cm>>c[4]){
    int card[14];
    for(int i=0;i<14;i++)
      card[i] = 0;
    bool fourcard = false;
    bool threecard = false;
    bool twopair = false;
    bool onepair = false;
    bool fullhouse = false;
    for(int i=0;i<5;i++){
      card[c[i]]++;
      switch(card[c[i]]){
      case 2:
	if(threecard)
	  fullhouse = true;
	else if(onepair)
	  twopair = true;
	else
	  onepair = true;
	break;
      case 3:
	if(twopair)
	  fullhouse = true;
	else
	  threecard = true;
	break;
      case 4:
	fourcard = true;
	break;
      default:
	break;
      }
    }
    if(fullhouse){
      cout<<"full house"<<endl;
      continue;
    }
    if(fourcard){
      cout<<"four card"<<endl;
      continue;
    }
    if(threecard){
      cout<<"three card"<<endl;
      continue;
    }
    if(twopair){
      cout<<"two pair"<<endl;
      continue;
    }
    if(onepair){
      cout<<"one pair"<<endl;
      continue;
    }
    bool straight = false;
    for(int i=1;i<10;i++)
      if(card[i]&&card[i+1]&&card[i+2]&&card[i+3]&&card[i+4])
	straight = true;
    if(card[10]&&card[11]&&card[12]&&card[13]&&card[1])
      straight = true;
    if(straight)
      cout<<"straight"<<endl;
    else
      cout<<"null"<<endl;
  }
  return 0;
}