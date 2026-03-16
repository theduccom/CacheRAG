#include<iostream>
#include<string>
using namespace std;
int main(){
  int cnt=0,flag;
  string s,scan;

  while(cin >>s){
    flag=false;
  for(int i=0;i<s.size();i++) scan[i]=s[s.size()-1-i];
  for(int i=0;i<s.size();i++)   if(scan[i]==s[i])flag++;
  if(flag==s.size())cnt++;
  }
  cout<<cnt<<endl;
  return 0;}
				