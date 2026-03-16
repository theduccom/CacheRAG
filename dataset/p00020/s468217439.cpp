#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  string s;
  getline(cin, s);

  for(int i=0; i<s.size(); i++){
    if( s[i]-'a' >= 0 && s[i]-'a' < 26 ) s[i] -= 32;
  }
  cout << s << endl;

  return 0;
}