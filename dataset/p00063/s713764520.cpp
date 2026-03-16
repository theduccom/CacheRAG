#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
main(){
  string str;
  int res=0;
  while(cin >> str){
    string st = str;
    reverse(str.begin(),str.end());
    if(str == st) res++; 
  }
  cout << res << endl;
}