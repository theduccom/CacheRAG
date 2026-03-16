#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int m,int n){
  while(m != n){
    if (m > n)
      m = m - n;
    else
      n = n - m;
  }
  return m;
}

int main(){
  //ツ素ツ青板青カツ青ャ
  const int NUM = 1000000;
  bool prime[NUM];
  prime[0] = false;
  prime[1] = false;
  for(int i=2;i<NUM;i++)
    prime[i] = true;
  for(int i=2;i*i<NUM;i++)
    for(int k=2;i*k<NUM;k++)
      prime[i*k]=false;

  while(true){
    int n,x;
    cin>>n>>x;
    if(!n&&!x)break;
    int menu[n];
    int g;
    cin>>menu[0];
    g = menu[0];
    for(int i=1;i<n;i++){
      cin>>menu[i];
      g = gcd(g,menu[i]);
    }
    int p = -1;
    if(g==1){
    bool money[x+1];
    money[0] = true;
    for(int i=1;i<x+1;i++){
      money[i] = false;
      for(int j=0;j<n;j++){
	if(i>=menu[j]&&money[i-menu[j]]){
	  money[i] = true;
	  break;
	}
      }
      if(money[i]&&prime[i])p=i;
    }
    }
    if(p==-1)cout<<"NA"<<endl;
    else cout<<p<<endl;
  }
  return 0;
}