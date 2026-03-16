#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
  char c;
  while((c=getchar())!='\n'){
    if('a'<=c&&c<='z')
      c-='a'-'A';
    printf("%c",c);
  }
  cout<<endl;
  return 0;
}