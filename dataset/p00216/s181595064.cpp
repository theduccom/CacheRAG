#include<iostream>
using namespace std;
int main(){
  int w,ans;
  while(1){
    cin >> w;
    if(w==-1){
      break;
    }
    ans=1150;
    while(w>10){
      if(w>30){
	ans+=160;
	w--;
      }
      else if(w>20){
	ans+=140;
	w--;
      }
      else if(w>10){
	ans+=125;
	w--;
      }
    }
    ans=4280-ans;
    cout << ans << endl;
  }
}