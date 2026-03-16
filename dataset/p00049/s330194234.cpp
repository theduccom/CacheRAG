//0049
#include<cstdio>
using namespace std;

int main(void)
{
	int n[26] = {0};
	char str[16];
	while(scanf("%*d,%s", str) == 1)
	{
		if(str[1])
			n[25]++;
		else
			n[str[0]-'A']++;
	}
	printf("%d\n%d\n%d\n%d\n", n['A'-'A'], n['B'-'A'], n[25], n['O'-'A']);
	return 0;
}