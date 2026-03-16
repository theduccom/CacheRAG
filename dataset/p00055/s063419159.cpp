//0055

#include<cstdio>

int main(void)
{
	const int N = 10;
	double a[N];
	double n;
	double s;
	int i;
	while(scanf("%lf", &n) == 1)
	{
		a[0] = n;
		for(i = 1; i < N; i++)
		{
			a[i] = (i&1 ? 2*a[i-1] : a[i-1]/3);
		}
		s = 0;
		//ツ古」ツづォツづ個要ツ素ツづ個づ卍つ、ツつェツ渉ャツつウツつ「ツづ個づ、ツ古ォツ債キツづーツ渉ュツづ按つュツつキツづゥツつスツづ淞づ可古」ツづォツつゥツづァツ堕ォツつオツづつ「ツつュ
		for(i = N-1; i >= 0; i--)
			s += a[i];
		printf("%.8f\n", s);
	}
	return 0;
}