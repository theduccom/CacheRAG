#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  getline(cin,str);
  for(int i=0;i<str.size()-4;i++){
    if(str.substr(i,5) == "apple"){
      str.replace(i,5,"peach");
      //cout << str << i << endl;
    } else if(str.substr(i,5) == "peach"){
      str.replace(i,5,"apple");
      //cout << str << i << endl;
    }
  }
  cout << str << endl;
}