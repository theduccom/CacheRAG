#include<iostream>
#include<ios>
using namespace std;
char c='A',a,b;
main()
{
    while(~scanf("%c,%c\n",&a,&b))
    {
        if(a==c)c=b;
        else if(b==c)c=a;
    }
    printf("%c\n",c);
}
