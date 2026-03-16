#include<iostream>
#include<cstdio>
using namespace std;

int card[13];

void c_card(){
  for(int i=0; i<13; i++){
    card[i]=0;
  }
}

void judge(){
  int count2=0, count3=0;
  bool flag = false;
  for(int i=0; i<13; i++){
    if(card[i] == 2){ count2++; flag = true; }
    if(card[i] == 3){ count3++; flag = true; }
    if(card[i] == 4){ cout << "four card" << endl; flag = true;}

    if(card[i%13]== 1 && card[(i+1)%13]==1 && card[(i+2)%13]==1 && card[(i+3)%13]==1 && card[(i+4)%13]==1){
      if(card[10]==1 && card[11]==1 && card[12]==1 && card[0]==1 && card[1]==1){
	continue;
      }
      else{
	cout << "straight" << endl;
	flag = true;
      }
    }

  }
  
  if(count2==1 && count3==0) cout << "one pair" << endl;
  if(count2==2) cout << "two pair" << endl;
  if(count2==0 && count3==1) cout << "three card" << endl;
  if(count2==1 && count3==1) cout << "full house" << endl;

  if(!flag) cout << "null" << endl;
}


int main(){
  int c[5];
  while(scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4])!=EOF){
    c_card();
    for(int i=0; i<5; i++)
      card[c[i]-1]++;

    judge();

  }
}