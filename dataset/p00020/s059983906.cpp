#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  string str;
  getline(cin, str);

  for(int i=0;i<str.size();i++){
    if('a' <= str[i] && str[i] <= 'z'){
      str[i] += 'A' - 'a';
    }
  }

  cout << str << endl;
}


  