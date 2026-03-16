#include <iostream>
using namespace std;

int main(){
  string str;

  while(cin >> str){
    for(int i = 0 ; i < str.length() ; ++i){ 
      if(str[i] == '@'){
	int len = str[i+1] - '0';
	for(int j = 0 ; j < len ; ++j){
	  cout << str[i+2];
	}
	++i;i++;
      }
      else cout << str[i];
    }
    cout << '\n';
  }

  return 0;
}