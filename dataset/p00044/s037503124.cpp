#include<iostream>
using namespace std;

int main(){

  int n,a[1000000]={0};

  for(int i=2;i*i<=1000000;i++){
    if(a[i]==0){
      for(int j=i+i;j<=1000000;j+=i) a[j]=1; 
    }
  }

  while(cin >> n){

    for(int i=n-1;i>=2;i--){
      if(a[i]==0){
	cout << i << ' ';
	break;
      }
    }

    for(int i=n+1;i<=1000000;i++){
      if(a[i]==0){
	cout << i << endl;
	break;
      }
    }

  }
}