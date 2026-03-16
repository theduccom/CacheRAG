#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,A=0,B=0,O=0,AB=0;
    char c[10]={0};
    while(scanf("%d,%s",&a,c) != EOF )
    {
        if(strlen(c)==2)AB++;
        else if(c[0]=='B')B++;
        else if(c[0]=='O')O++;
        else A++;
    }
    cout<<A<<endl<<B<<endl<<AB<<endl<<O<<endl;
    return 0;
}