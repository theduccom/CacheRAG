#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;

  while(getline(cin, s)){
    int flag = 0;
    
    while(true){
      for(int i=0;i<s.length();i++){
	string key1 = s.substr(i,3), key2 = s.substr(i,4);
	if(key1 == "the" || key2 == "this" || key2 == "that"){
	  flag = 1;
	}
      }
      
      if(flag){
	break;
      }else{
	
    
	for(int i=0;i<s.length();i++){
	  if(s[i] >= 'a' && s[i] <= 'z'){
	    // s[i] -= 'a';
	    // s[i] += 1;
	    // s[i] = s[i]%('A'-'a');
	    // s[i] += 'a';

	    s[i] -= 'a' - 'A';
	    s[i] = (char)('A' + (s[i] - 'A' + 26 + 1)%26);
	    s[i] += 'a' - 'A';
	    
	  }else{
	    continue;
	  }
	}
      }
    }
    cout << s << endl;
  }
  return 0;
}


  