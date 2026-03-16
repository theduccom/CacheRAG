#include<iostream>
#include<string>
using namespace std;

int main(){
  int num,i,ans[4]={0};
  string blood;
  while(cin >> num){
    cin >> blood;
    if(blood == ",A"){
      ++ans[0];
    }
    else if(blood == ",B"){
      ++ans[1];
    }
    else if(blood == ",AB"){
      ++ans[2];
    }
    else{
      ++ans[3];
    }
  }
  for(i=0;i<4;i++){
    cout << ans[i] << endl;
  }
}