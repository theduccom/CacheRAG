//Poker Hand
#include<bits/stdc++.h>
using namespace std;

int c[5];

bool four_card(){
  if(c[0]==c[3] || c[1]==c[4]){
    cout<<"four card"<<endl;
    return true;
  }
  return false;
}

bool full_house(){
  if((c[0]==c[2] && c[3]==c[4]) || (c[0]==c[1] && c[2]==c[4])){
    cout<<"full house"<<endl;
    return true;
  }
  return false;
}

bool straight(){
  int i, n=c[0];
  for(i=1; i<5; i++){
    if(n==1&&c[i]==10){
      n=c[1];
      continue;
    }
    if(c[i]!=n+1)break;
    n=c[i];
  }
  if(i==5){
    cout<<"straight"<<endl;
    return true;
  }
  return false;
}

bool three_card(){
  if(c[0]==c[2] || c[1]==c[3] || c[2]==c[4]){
    cout<<"three card"<<endl;
    return true;
  }
  return false;
}

bool two_pair(){
  int n=0;
  for(int i=0; i<5; i++){
    if(c[i]==c[i+1])n++;
  }
  if(n==2){
    cout<<"two pair"<<endl;
    return true;
  }
  return false;
}

bool one_pair(){
  int n=0;
  for(int i=0; i<5; i++){
    if(c[i]==c[i+1])n++;
  }
  if(n==1){
    cout<<"one pair"<<endl;
    return true;
  }
  return false;
}

int main(){
  while(scanf("%d,%d,%d,%d,%d", &c[0], &c[1], &c[2], &c[3], &c[4])!=EOF){
    sort(c, c+5);
    if(four_card())continue;
    if(full_house())continue;
    if(straight())continue;
    if(three_card())continue;
    if(two_pair())continue;
    if(one_pair())continue;
    cout<<"null"<<endl;
  }
  return 0;
}