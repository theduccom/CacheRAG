#include<iostream>
#include<vector>
#include<string>

using namespace std;

char returnc(char c){
  if('a'<=c && c<='z'){
    if(c=='z')return 'a';
    return ++c;
  }
  return c;
}
int main(void){
  string s;
  while(getline(cin,s)){

  vector<string> ss;
  string str;
  s+= " ";
  for(int i = 0 ; i < s.size() ; i ++){
    if(s[i] == ' '){
      ss.push_back(str);
      str="";
    }else{
      str+=s[i];
    }
  }
  bool ok=true;
  string out[] = {"this","that","the"};
  while(ok){
    for(int i = 0 ; i < ss.size(); i ++){
      //cout<<ss[i]<<endl;
      for(int j = 0 ; j < ss[i].size() ; j ++){
	ss[i][j] = returnc(ss[i][j]);
      }
      for(int j = 0 ; j < 3 ; j ++){
	if(ss[i] == out[j])ok=false;
      }
    }
  }
  for(int i = 0 ; i < ss.size()-1 ; i ++){
    cout<<ss[i]<<" ";
  }
  cout<<ss[ss.size() - 1]<<endl;
  }
}