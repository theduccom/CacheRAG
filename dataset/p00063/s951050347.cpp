#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  int count = 0;

  while(cin >> s){
    int start=0, end=s.size()-1;
    while(1){
      if(start == end || (s.size() / 2 < start)){
	count++;
	break;
      }
      if(s[start] != s[end]){
	break;
      }
      start++; end--;
    }    
  }
  cout << count << endl;
  return 0;
}