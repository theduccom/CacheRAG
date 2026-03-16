#include<bits/stdc++.h>
using namespace std;

int main(){
    int tmp[5];
    char com;
    while(cin >>tmp[0]>>com>>tmp[1]>>com>>tmp[2]>>com>>tmp[3]>>com>>tmp[4]){
    int hand[14]={};

    for(int i=0; i<5; ++i){
      if(tmp[i]==1)++hand[13];
      ++hand[tmp[i]-1];
    }

    int pair=0,three=0,str=0,four=0;
    for(int i=0; i<14; ++i){
      if(hand[i]==4){++four;}
      if(hand[i]==1)++str;
      if(hand[i]==2)++pair;
      if(hand[i]==3)++three;
      if(str!=5 && hand[i]==0)str=0;
    }
    if(hand[0]==hand[13] && hand[0]==2)--pair;
    if(four)cout << "four card" << endl;
    else if(three && pair)cout << "full house" << endl;
    else if(str >= 5)cout << "straight" << endl;
    else if(three)cout << "three card" << endl;
    else if(pair == 2)cout << "two pair" << endl;
    else if(pair == 1)cout << "one pair" << endl;
    else cout << "null" << endl;
  }   
}

