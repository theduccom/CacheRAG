#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;//回数
  cin >> n;
  cin.get();
  for(int i=0;i<n;i++){
  string s;
  getline(cin,s);//１行読み込む
  for(int i=0;i<s.size();i++){
    if(s.substr(i,7)=="Hoshino")
      s[i+6]='a';
  }
  cout << s << endl;
  }
}