#include<iostream>
using namespace std;
int n,a;
int t[10];
int main(){
  while(cin>>n&&n){
    for(int i=0;i<10;i++)t[i]=0;
    for(int i=0;i<n;i++){
      cin>>a;
      t[a]++;
    }
    for(int i=0;i<10;i++){
      for(int j=0;j<t[i];j++)cout<<'*';
      if(t[i]==0)cout<<'-';
      cout<<endl;
    }
  }
  return 0;
}