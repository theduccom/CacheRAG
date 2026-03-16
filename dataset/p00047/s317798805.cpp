#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く 
　　提出する問題を間違えない */
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
int main(){
  bool ball[3] = {true,false,false};
  char receive[3];
  while(1){
    cin >> receive;
    if(cin.eof())break;
    swap(ball[receive[0]-'A'],ball[receive[2]-'A']);
  }
  for(int i=0;i<3;i++){
    if(ball[i])cout << (char)(i+'A') << endl;
  }
}