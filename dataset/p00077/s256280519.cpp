#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
  string s;

  while(getline(cin,s)){
   
    for(int i=0;i<s.length();i++){
   if(s[i] == '@'){


     for(int k=0;k<s[i+1]-'0';k++){
	  cout << s[i+2];
	}
     
	i+=2;
      }
      else{
	cout << s[i];
      }

    }
    cout << endl;

  }
  

  return 0;
}