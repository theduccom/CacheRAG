#include<bits/stdc++.h>
using namespace std;
int main(){
  map<char,int>m;
  m['I']=1;
   m['V']=5;
    m['X']=10;
     m['L']=50;
      m['C']=100;
       m['D']=500;
        m['M']=1000;
  string s;
  while(cin>>s){
    reverse(s.begin(),s.end());
    int p=0;
    p+=m[s[0]];
    for(int i=1;i<s.size();i++)
      if(m[s[i]]<m[s[i-1]])p-=m[s[i]];
        else p+=m[s[i]];
    cout<<p<<endl;
  }
}