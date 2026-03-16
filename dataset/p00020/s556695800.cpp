#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char a[200];
  int i;
  i=0;
  while(scanf("%c",&a[i])!=EOF)i++;
  for(int j=0;j<i;j++){
    if('a'<=a[j]&&a[j]<='z'){
      a[j]=a[j]-'a'+'A';
    }
    cout<<a[j];
  }
  //cout<< endl;
  
  return 0;
}