//0034 Railway Lines

#include<iostream>
#include<numeric>
using namespace std;

int main(void)
{
	while(1)
	{
		const int N = 10;
		int l[N];
		int v1, v2;
		int i;
		char dummy;
		for(i = 0; i < N; i++)
		{
			cin >> l[i] >> dummy;
		}
		if(!cin)
			break;
		cin >> v1 >> dummy >> v2;

		//Jnw©çÌ£
		int p[N];
		partial_sum(l, l+N, p);
		//v1+v2ÌXs[hÅsum(l)ð¥j·éÔª·êá¤Ô
		double t = ((double)p[N-1] / (v1+v2));
		double crashP = v1*t;	//·êá¤Êu
		//ãÍÔÉ©Ä¢­¾¯
		for(i = 0; i < N; i++)
		{
			if(p[i] >= crashP)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}