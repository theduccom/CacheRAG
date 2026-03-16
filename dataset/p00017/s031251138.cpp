#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  while(getline(cin,s)){
    for(int i=0;i<26;i++){
      string ans;
      for(string::iterator it=s.begin();it!=s.end();it++){      
	if(*it==' '||*it=='.'){
	  ans.push_back(*it);
	  continue;
	}
	ans.push_back((char)(((int)*it-0x61+i)%26+0x61));
      }
      if(ans.find("the")!=string::npos||ans.find("this")!=string::npos||ans.find("that")!=string::npos){
	cout<<ans<<endl;
	break;
      }
    }
  }
  return 0;
}