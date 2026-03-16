#include<iostream>
#include<string>
#include<vector>
using namespace std;
char CaesarChar(char );
string CaesarString(string s);
vector<string> CaesarVector(vector<string> v);
vector<string> SolveCaesar(vector<string> v);
int main() {
  string s;
  while( getline(cin,s)) {  
    vector<string> array;
    int space=0;
    int next_space=0;    
    for(int i=0;i<(int)s.size();i++) {
      if(s[i]== ' '){
	next_space=i;
	string tmp="";
	for(int j=space;j<next_space;j++)
	  tmp+=s[j];
	space=next_space+1;
	array.push_back(tmp);
      }
    }
    string tmp="";
    for(int i=next_space+1;i<(int)s.size();i++) 
      tmp+=s[i];
    array.push_back(tmp);
    vector<string> answer=SolveCaesar(array);
    for(int i=0;i<(int)answer.size();i++){
      cout<<answer[i];
      if(i!=(int)answer.size()-1)
	cout<<" ";
    } 
    cout<<endl;
  }
  return 0;
}
char CaesarChar(char c) {
  if(c=='z')
    return 'a';
  if(int('a')<=int(c) && int(c)<int('z'))
  return char(c+1);
  return c;
}
string CaesarString(string s) {
  string tmp="";
  for(int i=0;i<(int)s.size();i++)
    tmp+=CaesarChar(s[i]);
  return tmp;
}
vector<string> CaesarVector(vector<string> v) {
  vector<string> tmp;
  for(int i=0;i<(int)v.size();i++) 
    tmp.push_back(CaesarString(v[i]));
  return tmp;
}
vector<string> SolveCaesar(vector<string> v) {
  for(int i=0;i<(int)v.size();i++) {
    if(v[i]=="the" || v[i]=="this" || v[i]=="that")
      return v;
  } 
  return SolveCaesar(CaesarVector(v));
}

