#include <iostream>
#include <string.h>
using namespace std;
int main(){
char s[10001];
cin.getline(s,10000);
int c = strlen(s);
while(c--)
if('a' <= s[c] && s[c] <= 'z')
s[c] += 'A' - 'a';
cout << s << "\n";
return 0;
}