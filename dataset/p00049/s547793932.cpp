#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int number;
  char  brad[2];
  int a=0;
  int b=0;
  int ab=0;
  int o=0;
  while(scanf("%d,%s",&number,brad)!=EOF){
      if(brad[0]=='A' && brad[1]=='B')ab++;
      else if(brad[0]=='A')a++;
      else if(brad[0]=='B')b++;
      else if(brad[0]=='O')o++;
  }
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<ab<<endl;
  cout<<o<<endl;
}