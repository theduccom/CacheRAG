#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  map<char,int> m;
  m['I']=1;
  m['V']=5;
  m['X']=10;
  m['L']=50;
  m['C']=100;
  m['D']=500;
  m['M']=1000;
  m['O']=0;
  string s;
  while(cin>>s){
    int ans=0;
    int n=-1;
    char c='O';
    for(string::iterator it=s.begin();it!=s.end();it++){
      if(*it==c) n++;
      else{
	if(m[c]*5==m[*it]||m[c]*10==m[*it]){
	  ans+=m[*it]-m[c]*n;
	  n=0;
	  c=*it;
	  continue;
	}
	else if(n!=-1) ans+=m[c]*n;
	c=*it;
	n=1;
      }
    }
    ans+=m[c]*n;
    cout<<ans<<endl;
  }
  return 0;
}