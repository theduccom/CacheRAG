#include <iostream>
#include <string>
using namespace std;
int main(){
  string text;
  getline(cin,text,'\n');
  for(int i=0;i<text.size();i++)
    if('a'<=text[i]&&text[i]<='z')
      text[i]-=32;
  cout <<text<< endl;
}