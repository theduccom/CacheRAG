#include <iostream>
using namespace std;

int main(){
  int n=0,n1,n2;
  char s1,s2,s;
  while(cin>>s1>>s>>s2){
    n1=s1-'A';
    n2=s2-'A';
    if(n1==n)n=n2;
    else if(n2==n)n=n1;
  }
    if(n==1)cout<<'B'<<endl;
    else if(n==0)cout<<'A'<<endl;
    else if(n==2)cout<<'C'<<endl;
  return 0;
}