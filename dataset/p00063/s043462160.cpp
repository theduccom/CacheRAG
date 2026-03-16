#include<iostream>
#include<string>

using namespace std;

int main(){
  int i, j, isFound, count=0;
  string str;
  while(cin >> str){
    isFound = 1;

    if(str.size() != 1){
      for(i=0, j=str.size()-1; i<= str.size()/2; ++i, --j){
        if(str[i] != str[j]){
	  isFound = 0;
	  break;
        }
      }
    }

    if(isFound == 1) count++;
  }
  cout << count <<endl;
  return 0;
}