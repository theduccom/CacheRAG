#include<iostream>
#include<string>
using namespace std;

int main(){

  string str;
  int ans = 0,i;

  while(cin >> str){
    int t = 0;

    for(i=0;i<str.size()/2;i++){
      if(str[i] == str[str.size()-i-1]) t++;
    }

    if(t == i) ans++;
  }

  cout << ans << endl;
}