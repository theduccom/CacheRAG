//Bolld Groups
#include<bits/stdc++.h>
using namespace std;

int n[4];

int main(){
  int t1;
  char t2;
  string s;
  while(cin>>t1>>t2>>s){
    if(s=="A")n[0]++;
    if(s=="B")n[1]++;
    if(s=="AB")n[2]++;
    if(s=="O")n[3]++;
  }
  for(int i=0; i<4; i++)
    cout<<n[i]<<endl;
  return 0;
}