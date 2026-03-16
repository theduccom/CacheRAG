#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
  int n,bell;
  string s;
  while(1){
    cin >> s;
    if(cin.eof()){
      break;
    }
    for(int i=0;s[i]!='\0';i++){
      if(s[i]=='@'){
	i++;
	bell=(int)s[i];
	bell-=48;
	i++;
	for(int j=0;j<bell;j++){
	  cout << s[i];
	}
      }
      else{
	cout << s[i];
      }
    }
    cout << endl;
  }
}