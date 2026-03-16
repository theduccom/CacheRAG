#include <iostream>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  string s;
  getline(cin,s);
  r(i,s.size()-4){
    if(s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e'){s[i]='p';s[i+1]='e';s[i+2]='a';s[i+3]='c';s[i+4]='h';}
    else if(s[i]=='p'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h'){s[i]='a';s[i+1]='p';s[i+2]='p';s[i+3]='l';s[i+4]='e';}
  }
  cout<<s<<endl;
}