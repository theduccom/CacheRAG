	

#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,sum,a,b;
  string s;
  while(cin>>s){
    a=s.size();
    sum=0;
    b=0;
    for(int i=a-1;i>=0;i--){
      if(s[i]=='I')n=1;
      else if(s[i]=='V')n=5;
      else if(s[i]=='X')n=10;
      else if(s[i]=='L')n=50;
      else if(s[i]=='C')n=100;
      else if(s[i]=='D')n=500;
      else if(s[i]=='M')n=1000;

      if(n<b)n*=-1;

      sum+=n;

      b=n;

    }
    cout<<sum<<endl;
  }
  
  return 0;
}