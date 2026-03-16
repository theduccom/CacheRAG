#include<string>
#include<iostream>
using namespace std;
int main(){

  string s,str;
  int sum = 0;
  while(cin >> s){
    str = s;
    for(int i=0;i<(str.size()-1-i);i++) swap(str[i],str[str.size()-1-i]);
    if(str==s) sum++;

  }
  cout << sum << endl;
  return (0);
}