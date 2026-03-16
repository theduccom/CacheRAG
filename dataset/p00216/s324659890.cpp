#include<iostream>
using namespace std;
int main(){
  int w,ans;
  while(cin>>w){
    if(w==-1) break;
    ans = 1150;
    if(w>10&&w<=20) ans += (w-10) * 125;
    else if(w>=20) ans += 10 * 125;
    if(w>20&&w<=30) ans += (w-20) * 140;
    else if(w>30) ans += 10 * 140;
    if(w>30) ans += (w-30) * 160;
    cout << 4280-ans << endl;
  }
  return 0;
}

 