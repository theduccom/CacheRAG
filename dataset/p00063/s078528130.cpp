#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char c[100],hc[100];
  int n,count=0;
  while(cin>>c){
    n = 0;
    for(int i=strlen(c)-1;i>=0;i--){
      hc[n] = c[i];
      n++;
    }
    for(int i=0;i<strlen(c);i++){
      if(hc[i]!=c[i]) break;
      else if(i==strlen(c)-1) count++;
    }
  }
  cout << count << endl;
  return 0;
}