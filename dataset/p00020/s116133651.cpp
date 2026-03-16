#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
  string bun;
  
  getline(cin,bun);
  
  for(int i=0;i<bun.size();i++){
    if(bun[i] <= 'z' && bun[i] >= 'a'){
      printf("%c",bun[i]-32);
    }
    else{
      printf("%c",bun[i]);
    }
  }
  cout << endl;
}