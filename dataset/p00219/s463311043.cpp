#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
int main(){
  int n;
  while(cin>>n,n){
    int data[10];
    memset(data,0,sizeof(data));
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      data[a]++;
    }
    for(int i=0;i<10;i++){
      if(data[i]==0)cout<<'-'<<endl;
      else{
        for(int j=0;j<data[i];j++){
          cout<<'*';
        }
        cout<<endl;
      }
    }
  }
}