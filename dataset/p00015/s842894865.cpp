#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

int main(){
  int n;
  string a,b;
  cin>>n;
  for(int j=0;j<n;j++){
    cin>>a>>b;
    int asize=a.length();
    int bsize=b.length();
    int smax=max(asize,bsize);
    bool flag=false;
    int s;
    stringstream ss;
    for(int i=0;i<smax;i++){
      if(asize-i-1<0) s=strtol(b.substr(bsize-i-1,1).c_str(),NULL,0);
      else if(bsize-i-1<0) s=strtol(a.substr(asize-i-1,1).c_str(),NULL,0);
      else s=strtol(a.substr(asize-i-1,1).c_str(),NULL,0)+strtol(b.substr(bsize-i-1,1).c_str(),NULL,0);
      if(flag) s++;
      ss<<s%10;
      if(s>9)
	flag=true;
      else
	flag=false;
    }
    string ans=ss.str();
    if(ans.length()+flag>80){
      cout<<"overflow"<<endl;
      continue;
    }
    if(flag) cout<<1;
    for(string::reverse_iterator rit=ans.rbegin();rit!=ans.rend();rit++)
    cout<<*rit;
    cout<<endl;
  }
  return 0;
}