
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  int n,i,j;
  string s,t;
  bool f;
  while(getline(cin,s)){
    f=true;
    for(i=0;f && i<26;i++){
      t=s;
      for(j=0;j<t.size();j++){
	if(!islower(t[j]))continue;
	t[j]-='a';
	t[j]=(t[j]+i)%26;
	t[j]+='a';
      }
      if(t.find("this ",0)==0)f=false;
      if(t.find("that ",0)==0)f=false;
      if(t.find("the ",0)==0)f=false;
      if(t.find(" this",t.size()-5)==t.size()-5)f=false;
      if(t.find(" that",t.size()-5)==t.size()-5)f=false;
      if(t.find(" the",t.size()-4)==t.size()-4)f=false;
      if(t.find(" this ")!=string::npos)f=false;
      if(t.find(" that ")!=string::npos)f=false;
      if(t.find(" the ")!=string::npos)f=false;
    }
    cout<<t<<endl;
  }
}