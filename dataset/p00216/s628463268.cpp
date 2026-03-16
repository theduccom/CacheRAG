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
  int n,ans,frnt=4280;
  while(1){
    ans=1150;
    cin>>n;
    if(n==-1)break;
    if(n>=30)ans+=1250+1400+(n-30)*160;
    else if(n>=20)ans+=1250+(n-20)*140;
    else if(n>=10)ans+=(n-10)*125;
    cout<<frnt-ans<<endl;
  }
}