#include<iostream>
#include<map>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
main(){
  map<char,int> kioku;
  kioku['I']=1;
  kioku['V']=5;
  kioku['X']=10;
  kioku['L']=50;
  kioku['C']=100;
  kioku['D']=500;
  kioku['M']=1000;
  char tmp[1000];
  char c;
  int num=0;
  int before=0;
  while(cin>>tmp){
    for(int i=0;i<strlen(tmp);i++){
      if(i!=strlen(tmp)-1){
	if(kioku[tmp[i+1]]>kioku[tmp[i]]){
	  num+=abs(kioku[tmp[i]]-kioku[tmp[i+1]]);
	  i++;
	}
	else{
	  num+=kioku[tmp[i]];
	}
      }
      else{
	num+=kioku[tmp[i]];
      }
    }
    cout<<num<<endl;
    num=0;
  }
}