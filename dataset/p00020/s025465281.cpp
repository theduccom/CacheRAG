#include <iostream>
#include <ctype.h>
using namespace std;
void str_toupper(char *str)
{
	do{
		*str = toupper(*str);
	}while(*str++);
}
int main(void)
{
	char str[10000];
	fgets(str,sizeof(str),stdin);
	str_toupper(str);
	cout << str;
	return 0;
}