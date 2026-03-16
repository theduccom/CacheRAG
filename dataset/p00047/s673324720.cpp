//0047

#include<cstdio>
#include<algorithm>
using namespace std;

int main(void)
{
	bool ball[3] = {true,false,false};
	char str[8];
	while(fgets(str,8,stdin))
	{
		swap(ball[str[0]-'A'], ball[str[2]-'A']);
	}

	printf("%c\n", 
		(ball[0]?'A' : (ball[1]?'B':'C') )
		);
	return 0;
}