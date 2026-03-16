#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
	string X;
	getline(cin,X);
	string ans = X;
  
  string apple = "apple";
  string peach = "peach";
  while(1){
	  int x=X.find(apple,0);
	   if ( x == string::npos ) break;
    for ( int i = 0; i < 5; i++ ) {
      ans[x+i] = peach[i];
      X[x+i] = '-';
    }
  
  }
  while(1){
	  int x=X.find(peach,0);
	   if ( x == string::npos ) break;
    for ( int i = 0; i < 5; i++ ) {
      ans[x+i] = apple[i];
      X[x+i] = '-';
    }
  
  }
  cout<<ans<<endl;
  return 0;
}
	
	
	
	