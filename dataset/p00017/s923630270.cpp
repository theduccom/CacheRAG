//Caesar Cipher
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> v;
  string s;
  while(getline(cin, s)){
    stringstream ss(s);
    string tmp;
    v.clear();
    while(getline(ss, tmp, ' ')){
      v.push_back(tmp);
    }
    while(true){
      bool flag=false;
      for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].length(); j++){
          if(v[i][j]=='.') continue;
          if(v[i][j]=='z') v[i][j]='a';
          else v[i][j]++;
        }
      }
      for(int i=0; i<v.size(); i++){
        if(v[i]=="this" || v[i]=="that" || v[i]=="the") flag=true;
      }
      if(flag)break;
    }
    for(int i=0; i<v.size(); i++){
      if(i!=v.size()-1) cout << v[i] << ' ';
      else cout << v[i] << endl;
    }
  }
  return 0;
}