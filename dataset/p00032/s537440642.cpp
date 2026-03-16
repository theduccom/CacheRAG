#include <iostream>
using namespace std;

int main(void){
int a,b,c;
int ca=0,cb=0;
char ch;

while(cin>>a>>ch>>b>>ch>>c){
if(a*a+b*b==c*c) ca++;
else if(a==b) cb++;
}
cout<<ca<<endl;
cout<<cb<<endl;
return 0;
}