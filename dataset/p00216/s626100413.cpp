#include <iostream>
using namespace std;
#define debug(x) cout<<#x<<" : "<<x<<endl;
int n;
int fee[]={1150,125,140,160};
int phase[]={10,20,30,1000};
int main(){
  while(cin >> n,n+1){
    int pre=4280;
    int w=n;
    int money=fee[0];
    w-=phase[0];
    for(int i=1;w>0;i++){
      money+=min(phase[i]-phase[i-1],n-phase[i-1])*fee[i];
      w-=phase[i]-phase[i-1];
    }
    cout<<pre-money<<endl;
  }
  return 0;
}