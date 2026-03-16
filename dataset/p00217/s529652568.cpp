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
    int ans[2];
    ans[1]=0;
    for(int i=0;i<n;i++){
      int id,d1,d2;
      cin>>id>>d1>>d2;
      if(ans[1]<d1+d2){
        ans[0]=id;
        ans[1]=d1+d2;
      }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
  }
}