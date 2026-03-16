#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){

  string ans;
  char c;

  while(scanf("%c",&c) != EOF){
    if('a'<=c && c<='z'){
      c = c-('a'-'A');
    }
    ans+=c;
  }

  cout << ans ;

  return 0;
}