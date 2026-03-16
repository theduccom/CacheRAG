#include<iostream>
#include<string>
using namespace std;
int main() {
int x;
string a;
getline(cin,a);
for( x=0; x<a.size(); x++){
if( a[x] == 'a' && a[x+1] == 'p' && a[x+2] == 'p' && a[x+3] == 'l' && a[x+4] == 'e'){
a[x] = 'p';
a[x+1] = 'e';
a[x+2] = 'a';
a[x+3] = 'c';
a[x+4] = 'h';
}else if( a[x] == 'p' && a[x+1] == 'e' && a[x+2] == 'a' && a[x+3] == 'c' && a[x+4] == 'h'){
a[x] = 'a';
a[x+1] = 'p';
a[x+2] = 'p';
a[x+3] = 'l';
a[x+4] = 'e';
}
}
cout << a << endl;
  return 0;
}
