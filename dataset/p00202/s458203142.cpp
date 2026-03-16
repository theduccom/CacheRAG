#include<iostream>
#include<algorithm>


const int MAX = 1000001;

using namespace std;

int prime[MAX];

void make(void){

  fill(prime,prime+MAX,1);
  prime[0] = 0;
  prime[1] = 0;
  for(int i = 2; i < MAX; i++){
    if(prime[i]){
      for(int j = 2*i; j < MAX; j+=i){
	prime[j] = 0;
      }
    }
  }
}

int main(){
  make();
  int menu, money;

  while(cin >> menu >> money && menu && money){

    int data[money+1];
    fill(data,data+money+1,0);
    int price[menu];

    for(int i = 0; i < menu; i++){
      cin >> price[i];
      for(int j = price[i]; j <= money; j+=price[i]){
	data[j] = 1;
      }
    }

    for(int i = 0; i < menu; i++){
      for(int j = price[i]; j <= money; j++){
	if(data[j-price[i]]) data[j] = 1;
      }
    }
    for(int i = money; i >= 0; i--){
      if(i == 0) cout << "NA" << endl;
      if(data[i] && prime[i]){
	cout << i << endl;
	break;
      }
    }
  }
  return 0;
}