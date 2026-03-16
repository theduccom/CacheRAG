#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int a=1,b=0,c=0,now;
    char str[4];
    while(scanf("%s",str)!=EOF){
        if((str[0]=='A'&&str[2]=='B')||(str[0]=='B'&&str[2]=='A')){
            now=a;
            a=b;b=now;
        }
        else if((str[0]=='A'&&str[2]=='C')||(str[0]=='C'&&str[2]=='A')){
            now=a;
            a=c;c=now;
        }
        else{
            now=b;
            b=c;c=now;
        }
        
    }
    if(a==1)cout<<"A\n";
    else if(b==1)cout<<"B\n";
    else cout<<"C\n";
}