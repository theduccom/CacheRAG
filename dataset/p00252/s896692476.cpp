#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  cin.tie(0);     // cout と cin の同期を切る
  ios::sync_with_stdio(false);  /* cの stdioストリーム (printfとか)と*/

  int b1,b2,b3;

  cin>>b1>>b2>>b3;

  if(b1==1&&b2== 0 &&b3==0){
    cout<<"Close"<<endl;
  }else if(b1==0&&b2== 1 &&b3==0){
    cout<<"Close"<<endl;
  }else if(b1==1&&b2== 1 &&b3==0){
    cout<<"Open"<<endl;
  }else if(b1==0&&b2== 0 &&b3==1){
    cout<<"Open"<<endl;
  }else if(b1==0&&b2==0&&b3==0){
    cout<<"Close"<<endl;
  }

  
  return 0;

}

