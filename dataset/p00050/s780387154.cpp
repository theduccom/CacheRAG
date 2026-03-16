#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define loop(i,a,b) for(int i = a; i < b ; i ++)
#define rep(i,a) loop(i,0,a)

int main(void){
  string s;
  getline(cin,s);
  vector<string> pa;
  string add = "";
  s+=" ";
  rep(i,s.size()){
    if(s[i] == ' '){
      if(add.size() >= 5){
	string res = "";
	for(int i = 0 ; i < add.size() ; i ++){
	  if(add[i + 0] == 'a' &&
	     add[i + 1] == 'p' &&
	     add[i + 2] == 'p' &&
	     add[i + 3] == 'l' &&
	     add[i + 4] == 'e' 
	     ){
	    res += "peach";
	    i += 4;
	    continue;
	  }
	  if(add[i + 0] == 'p' &&
	     add[i + 1] == 'e' &&
	     add[i + 2] == 'a' &&
	     add[i + 3] == 'c' &&
	     add[i + 4] == 'h' 
	     ){
	    res += "apple";
	    i += 4;
	    continue;
	  }
	  res += add[i];
	}
	add = res;
      }
      pa.push_back(add);
      
      add = "";
    }else{
      add += s[i];
    }
  }
  rep(i,pa.size()-1){
    cout<<pa[i]<<" ";
  }
  cout<<pa[pa.size()-1]<<endl;
}