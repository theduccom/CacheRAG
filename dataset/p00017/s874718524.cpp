#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool is_ok(const string& s)
{
  return s.find("this")!=-1 || s.find("that")!=-1 || s.find("the")!=-1;
}
int main(void)
{
  string str;
  while( getline(cin,str) ) {
    while( !is_ok(str) ) {
      for(int i=0;i<int(str.size());i++){
	if( !isalpha(str[i]) ) continue;
	str[i]++;
	if(str[i]>'z') str[i]='a';
      }
    }
    cout << str << endl;
  }
}