#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string s;
long id;
long ev1(void);
long num(void){
long v=0;
while(isdigit(s[id])){v=v*10+(s[id]-48);id++;}
return v;
}
long ev3(void){
if(s[id]=='('){
id++;
long v=ev1();
id++;
return v;
}else return num();
}
long ev2(void){
long v=ev3();
while(1){
if(s[id]=='*'){id++;v*=ev3();}
else if(s[id]=='/'){id++;v/=ev3();}
else break;
}
return v;
}
long ev1(void){
long v=ev2();
while(1){
if(s[id]=='+'){id++;v+=ev2();}
else if(s[id]=='-'){id++;v-=ev2();}
else break;
}
return v;
}
int main(){
long n,i;
cin>>n;
for(i=0;i<n;i++){
cin>>s;
id=0;
cout<<ev1()<<endl;
}
return 0;
}