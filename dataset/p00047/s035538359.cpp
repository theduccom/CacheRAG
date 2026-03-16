#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  char a='A';
  char s,t,gomi;
  while(cin>>s>>gomi>>t){
    if(s==a||t==a)a=s+t-a;
  }
  cout<<a<<endl;
}