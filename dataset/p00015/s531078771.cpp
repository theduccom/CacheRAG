#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a,n,slen,tlen;
  string s,t;
  string *u;
  cin>>n;
  u=new string[n];
  for(i=0;i<n;i++){
    cin>>s>>t;
    slen=s.length();
    tlen=t.length();
    if(slen>80||tlen>80)
      u[i]="overflow";
    else{
      u[i]="00000000000000000000000000000000000000000000000000000000000000000000000000000000";
      a=0;
      for(j=0;j< (slen>tlen?slen:tlen) ;j++){
	if((j<slen?s[slen-j-1]:'0')+(j<tlen?t[tlen-j-1]:'0')+a-'0'-'0'>9){
	  u[i][79-j]=(j<slen?s[slen-j-1]:'0')+(j<tlen?t[tlen-j-1]:'0')+a-'0'-10;
	  a=1;
	}else{
	  u[i][79-j]=(j<slen?s[slen-j-1]:'0')+(j<tlen?t[tlen-j-1]:'0')+a-'0';
	  a=0;
	}  
      }
      if(j==80&&a)
	u[i]="overflow";
      else
	u[i][79-j]=a+'0';
    }
  }
  for(i=0;i<n;i++){
    if(u[i]=="overflow")
      cout<<u[i]<<endl;
    else{
      for(j=0;j<79&&u[i][j]=='0';j++);
      for(;j<80;j++)
	cout<<u[i][j];
      cout<<endl;
    }
  }
  return 0;
}