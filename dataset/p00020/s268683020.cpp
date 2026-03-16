#include <cstdio>
#include <cctype>

using namespace std;

int main()
{
	for(int c;(c=getchar())!=EOF;)
		putchar(toupper(c));
	
	return 0;
}