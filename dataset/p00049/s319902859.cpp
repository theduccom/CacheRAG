#include<iostream>
#include<string>
using namespace std;
int main(){
  string t;
  int n[4]={0,0,0,0};
  while(cin>>t){
  if(t.substr(t.find(",")+1)=="A")n[0]++;
  if(t.substr(t.find(",")+1)=="B")n[1]++;
  if(t.substr(t.find(",")+1)=="AB")n[2]++;
  if(t.substr(t.find(",")+1)=="O")n[3]++;}
  cout<<n[0]<<endl<<n[1]<<endl<<n[2]<<endl<<n[3]<<endl;
}