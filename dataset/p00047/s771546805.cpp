#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  char cup='A';
  while(cin>>str){
    char a,b;
    a=str[0];b=str[2];
    if(a==cup){
      cup=b;
    }else if(b==cup){
      cup=a;
    }
  }
  cout<<cup<<endl;
  return 0;
}