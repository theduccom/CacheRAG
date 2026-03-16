//Apple and Peach
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> v;
  string s, tmp;
  getline(cin, s);
  stringstream ss(s);
  while(getline(ss, tmp, ' ')){
    int i;
    if((i=tmp.find("apple", 0))!=string::npos){
      tmp.replace(i, 5, "peach");
    }
    else if((i=tmp.find("peach", 0))!=string::npos){
      tmp.replace(i, 5, "apple");
    }
    v.push_back(tmp);
  }
  for(int i=0; i<v.size(); i++){
    cout<<v[i];
    if(i!=v.size()-1)cout<<' ';
    else cout<<endl;
  }
  return 0;
}