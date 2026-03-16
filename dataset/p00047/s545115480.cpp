#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int a=1,b=0,c=0;
  char s,t,gomi;
  while(cin>>s>>gomi>>t){
    if(s>t)swap(s,t);//テ、ツクツヲテ」ツ?ウテヲツ崢ソテ」ツ??
    if(s=='A'&&t=='B')swap(a,b);
    if(s=='B'&&t=='C')swap(b,c);
    if(s=='A'&&t=='C')swap(a,c);
  }
  if(a)cout<<"A"<<endl;
  if(b)cout<<"B"<<endl;
  if(c)cout<<"C"<<endl;
}