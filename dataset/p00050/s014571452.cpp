#include<iostream>
#include<string>
using namespace std;

string replaceAll(string s,string f,string t){
  string r;
  for(int pos=0; (pos = s.find(f)) != s.npos; ){
    r+=s.substr(0,pos)+t;
    s = s.substr( pos+f.size() );
  }
  return r+s ;
}


int main() {
    string s;
    getline(cin,s);
    s = replaceAll(s,"apple","~~~");
    s = replaceAll(s, "peach", "apple");
    s = replaceAll(s, "~~~", "peach");
    cout<<s<<endl;
}