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
    for(int i=0;i<n;i++){
      int a,b,c;
      cin>>a>>b>>c;
      if(a==100||b==100||c==100)cout<<'A'<<endl;
      else if(a+b>=180)cout<<'A'<<endl;
      else if(a+b+c>=240)cout<<'A'<<endl;
      else if(a+b+c>=210)cout<<'B'<<endl;
      else if(a+b+c>=150&&(a>=80||b>=80))cout<<'B'<<endl;
      else cout<<'C'<<endl;
    }
  }
}