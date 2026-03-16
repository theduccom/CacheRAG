#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
  string str="";
  
  while(cin >> str){

    string ans="";

    for(int i=0;i<str.size();i++){
      if(str[i]=='@'){
	int cnt = str[i+1]-'0';
	char c = str[i+2];
	for(int j=0;j<cnt;j++){
	  ans += c;
	}
	i+=2;
      }
      else{
	ans += str[i];
      }
    }

    cout << ans << endl;

  }

  return 0;
  
}