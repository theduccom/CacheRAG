#include <iostream>

using namespace std;

void solve()
{
	int pos[3] = {1, 0, 0};
	char a, b;
	while(~scanf("%c,%c%*c", &a, &b))
	{
		swap(pos[a - 'A'], pos[b - 'A']);
	}
	for(int i = 0; i < 3; ++i)
	{
		if(pos[i] == 1)
		{
			printf("%c\n", i + 'A');
		}
	}
}

int main()
{
	solve();
	return(0);
}