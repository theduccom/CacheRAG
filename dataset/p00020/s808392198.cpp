#include <iostream>
#include <ctype.h>
#define r(i,n) for(int i;i<n;i++)
using namespace std;
int main(){
  string s;
  getline(cin,s);
  r(i,s.size())s[i]=toupper(s[i]);
  cout<<s<<endl;
}