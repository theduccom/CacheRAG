#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,m,ans=0;
  string s,jam="";
  while(cin >> s){
    jam="";
    n=s.size();
    for(int i=n-1;i>=0;i--){
      jam=jam+s[i];
    }
    if(s==jam){
      ans++;
    }
  }
  cout << ans << endl;
}