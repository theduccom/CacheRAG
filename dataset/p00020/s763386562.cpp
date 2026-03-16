#include <cstdio>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	char s[1000];
	scanf("%[^\n]",s);
	string str = s;
	transform(str.begin(),str.end(),str.begin(),::toupper);
	printf("%s\n",str.c_str());
	return 0;
}