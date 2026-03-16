#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  int co=0;
  string in;
  while(cin>>in!='\0'){
    string rev=in;
    reverse(in.begin(),in.end());
    if(in==rev)co++;
  }
  cout<<co<<endl;
}