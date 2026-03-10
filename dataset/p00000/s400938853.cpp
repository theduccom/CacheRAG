#include "cstdio"
#include "cstring"
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
   	int i,j;
   	for(i=1;i<=9;i++)
   	{
   		for(j=1;j<=9;j++)
   		{
   			printf("%dx%d=%d\n",i,j,i*j);
   		}
   	}
    return 0;
};