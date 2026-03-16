#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,ans;
  while(1){
    cin >> w;if(w==-1)break;
    ans = 1150;
    if(w>30){
      ans+=160*(w-30);
      w = 30;
    }
    if(w>20){
      ans+=140*(w-20);
      w = 20;
    }
    if(w>10){
      ans+=125*(w-10);
    }
    cout << 4280-ans << endl;
  }
}