#include<cstdio>
#include<cstring>

using namespace std;
int main(void)
{
	char r[100000];
	int kari[100000] = {0};
	while(scanf("%s",r) != EOF)
	{
		long long int ans = 0;
		int rs = strlen(r);
		for(int i = 0;i < rs;i++)
		{
			     if(r[i] == 'I') kari[i] = 1;
			else if(r[i] == 'V') kari[i] = 5;
			else if(r[i] == 'X') kari[i] = 10;
			else if(r[i] == 'L') kari[i] = 50;
			else if(r[i] == 'C') kari[i] = 100;
			else if(r[i] == 'D') kari[i] = 500;
			else if(r[i] == 'M') kari[i] = 1000;
		}

		for(int i = 0;i < rs - 1;i++)
		{
			if(kari[i] < kari[i+1]) ans -= kari[i];
			else ans += kari[i];
		}
		ans += kari[rs -1];
		printf("%lld\n",ans);
	}
	return 0;
}