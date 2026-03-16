#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  cin.tie(0);     // cout と cin の同期を切る
  ios::sync_with_stdio(false);  /* cの stdioストリーム (printfとか)と*/

  int a,b,c;

  cin>>a>>b>>c;

  bool judge=0;

  if(a==1&&b==0&&c==0){
    judge=1;
  }

  else if(a==0&&b==1&&c==0){
    judge=1;
  }

  else if(a==1&&b==1&&c==0){
    judge=0;
  }

  else if(a==0&&b==0&&c==1){
    judge=0;
  }

  else if(a==0&&b==0&&c==0){
    judge=1;
  }
           
  if(judge){
    cout<<"Close"<<endl;
  }else{
    cout<<"Open"<<endl;
  }

  return 0;

}

