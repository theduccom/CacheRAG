#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a,b,ans='A';
    while(scanf(" %c,%c",&a,&b)!=EOF)
    {
        if(a==ans) ans=b;
        else if(b==ans) ans=a;
    }
    printf("%c\n",ans);
  return 0;
}