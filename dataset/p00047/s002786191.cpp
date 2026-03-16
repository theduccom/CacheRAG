#include<iostream>
using namespace std;
int main(){
  char f,t,s;
  int b[3]={1},i;
  while(cin>>f>>t>>s){
    i=b[f-'A'];
    b[f-'A']=b[s-'A'];
    b[s-'A']=i;
  }
  for(i=0;b[i]==0;i++);
  s='A'+i;
  cout<<s<<endl;
  return 0;
}