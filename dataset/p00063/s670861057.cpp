#include<iostream>
#include<string>
using namespace std;

int main(){

  string str;
  int cnt, len;

  cnt = 0;
  while(cin >> str){
    len = str.length() - 1;
    for(int i=0; i<=len; i++, len--){
      if(str[i] != str[len]) break;
      if(i == len || i == len-1) cnt++;
    }
  }
  
  cout << cnt << endl;

  return 0;

}