#include<iostream>
using namespace std;

int main(){
  int table[55000]={};
  for(int i=2; i*i<55000; ++i){
    if(!table[i]){
      for(int j=i*2; j<=55000; j+=i){
        table[j]=1;
      }
    }
  }

  int n;
  while(~scanf("%d",&n)){
    int i;
    for(i=n-1; table[i]; --i);
    cout << i << " ";
    for(i=n+1; table[i]; ++i);
    cout << i << endl;
  }
  return 0;
}

