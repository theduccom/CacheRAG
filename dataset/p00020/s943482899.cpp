#include <iostream>

int main()
{
    int a;
    while (1)
    {
	a=getchar();
	if (a == EOF)break;
	if ('a'<=a && a<='z')
	{
	    a+='A'-'a';
	}
	putchar(a);
    }
    return 0;
}