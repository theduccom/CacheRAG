#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
  char a[1000][1000],b[1000][1000];
  string c;
  int i,j;
  
  getline(cin,c);
  
  for(j=0;j<c.length();j++){
    if(c[j] >= 97 && c[j] <=122){
      c[j]=c[j]-32;
    }
  }

  cout << c << endl;
  

}