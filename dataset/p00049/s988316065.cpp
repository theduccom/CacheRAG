#include<string>
#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,ab=0,o=0;
string ss;
while(cin >> ss){
if(ss[ss.length()-2]=='A')ab++;
else if(ss[ss.length()-1]=='B')b++;
else if(ss[ss.length()-1]=='A')a++;
else o++;
}
cout << a << "\n" << b << "\n";
cout << ab << "\n" << o << "\n";
return 0;
}