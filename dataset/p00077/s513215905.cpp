#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long

int main()
{
    int a,b,c;
    while(1)
    {
	a=getchar();
	if (a == EOF)break;
	if (a=='@')
	{
	    b = getchar()-'0';
	    c = getchar();
	    rep(i,b)putchar(c);
	} else {
	    putchar(a);
	}
    }
    return 0;
}