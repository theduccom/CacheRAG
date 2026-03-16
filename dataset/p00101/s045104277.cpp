#include<iostream>
#include<string>
using namespace std;

int main (){
  int n;
  int pos;
  string s;

  cin >> n;
  cin.ignore();
  for (int i = 0; i < n ; ++i){
    getline(cin, s);
    while(1){
      pos = s.find("Hoshino");
      if(pos == -1) break;
      s[pos+6] = 'a';
    }
    cout << s << endl;
  }
  return 0;
}