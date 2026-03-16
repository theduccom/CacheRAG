//Weight
#include<bits/stdc++.h>
using namespace std;

int w[10];

void a(int x, int y){
  if(x==0)return;
  if(x%2==1){
    w[y]=1;
  }
  else{
    w[y]=0;
  }
  a(x/2, y+1);
}

int main(){
  int n;
  while(cin>>n){
    bool flag=false;
    for(int i=0; i<10; i++)w[i]=0;
    a(n, 0);
    for(int i=0; i<10; i++){
      if(w[i]==1){
        if(flag)cout << ' ';
        cout << (int)pow(2.0, i);
        flag=true;
      }
    }
    cout << endl;
  }
  return 0;
}