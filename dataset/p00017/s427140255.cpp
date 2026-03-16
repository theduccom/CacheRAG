#include<iostream>
using namespace std;
int main(){
  string s;
  while(getline(cin,s)){
    for(int i=0; i<26; i++){
      for(int j=0; j<s.size(); j++){
	if(s[j] == 'z') s[j] = 'a';
	else if(s[j] >= 'a' && s[j] < 'z') s[j]++;
      }
      if(s.find("this") != string::npos ||
	 s.find("the") != string::npos||
	 s.find("that") != string::npos){
	cout <<s<<endl;
	break;
      }
    }
  }
  return 0;
}