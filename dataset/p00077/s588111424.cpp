#include <iostream>
#include <string>
using namespace std;
int main(){
  int i,j,len,c;
  string s;
  while(cin >> s){
    len=s.size();
    for(i=0;i<len;i++){
      if(s[i]=='@'){
        c=s[i+1]-'0';
	for(j=0;j<c;j++){
	  cout << s[i+2];
	}
	i+=2;
      }
      else cout << s[i]; 
    }
    cout << endl;
  }
  return 0;
}