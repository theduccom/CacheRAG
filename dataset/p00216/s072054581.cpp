#include<iostream>
using namespace std;

int main(){
  int w;
  int ans;

  while(1){
    cin >> w;
    if(w<0)break;
    
    if(w<=10)ans = 1150;
    else if(w<=20)ans = 1150 + 125*(w-10);
    else if(w<=30)ans = 2400 + 140*(w-20);
    else ans = 3800 + 160*(w-30);

    cout << 4280 - ans << endl;
  }
}