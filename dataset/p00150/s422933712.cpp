#include<iostream>
using namespace std;

string prime(int n){
  int i,j;
  string p = "001";
  while(p.size()<=n)p+="10";

  i = 3;
  while(i*i<=n){
    for(j=3*i;j<=n;j+=2*i)p[j] = '0';
    do{
      i+=2;
    }while(p[i]-'1');
  }
  return p;
}

int main(){
  int n;
  string p;
  while(1){
    cin >> n;
    if(!n)break;

    p = prime(n);

    while(n){
      if(p[n]=='1' && p[n-2]=='1'){
	cout << n-2 << " " << n << endl;
	break;
      }
      n--;
    }
  }
}
	