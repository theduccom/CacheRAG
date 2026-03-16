#include <iostream>

using namespace std;
int main(void){
    // Here your code !
int n,a=0,b=0,o=0,ab=0;
char c;
string d;

while(cin>>n>>c>>d){
    if(d=="B\0") b++;
    else if (d=="A\0") a++;
     else if (d=="O\0") o++;
      else if (d=="AB\0") ab++;
}
cout<<a<<endl<<b<<endl<<ab<<endl<<o<<endl;
return 0;
}