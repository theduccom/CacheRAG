#include<iostream>
using namespace std;
string str;
int cnt=0;
bool check(){
  for(int i=0;i<(int)str.size()/2;i++){
    if(str[i]!=str[str.size()-i-1])return false;
  }
  return true;
}
int main(){
  while(cin>>str){
    if(check())cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}