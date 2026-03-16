#include<bits/stdc++.h>
using namespace std;
int main(){

  int a[3];
  a[0] = 1;
  a[1] = a[2] = 0;
  string str;
  while(cin >> str){
    swap(a[str[0]-'A'],a[str[2]-'A']);
  }
  
  for(int i=0;i<=2;i++){
    if(a[i] == 1) printf("%c\n",('A'+i));
  }
  
  return (0);
}