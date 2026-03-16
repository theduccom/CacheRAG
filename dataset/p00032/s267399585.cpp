#include<iostream>
using namespace std;
 
int main(){
  int n1,n2,n3;
  int T=0,S=0;
  char s;
  while(cin>>n1>>s>>n2>>s>>n3){
    if(n1==n2)T++;
    else if((n1*n1)+(n2*n2)==(n3*n3))S++;
  }
  cout<<S<<endl<<T<<endl;   
 
  return 0;
}