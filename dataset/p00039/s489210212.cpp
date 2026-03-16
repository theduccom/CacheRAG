#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
string s;
map<char,int> a;
int main(void){
  a['I'] = 1;
  a['V'] = 5;
  a['X'] = 10;
  a['L'] = 50;
  a['C'] = 100;
  a['D'] = 500;
  a['M'] = 1000;

  while(cin >> s){
    int ans = 0;

    for(int i = 0; i < (int)s.size(); i++){
      if(a[s[i+1]] > a[s[i]]){
	ans -= a[s[i]];
      }
      else{
	ans += a[s[i]];
      }
    }
    cout << ans  << endl;
  }
}