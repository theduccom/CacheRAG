#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int l[10],v1,v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2) !=EOF)
	{
		int gou = 0,kaku = 0;
		for (int i = 0; i < 10; ++i)
			gou += l[i];
		double are = (double)gou*v1/(v1+v2);
		int ans;
		for (int i = 0; i < 10; ++i)
		{
			kaku += l[i];
			if(kaku >= are)
			{
				ans = i + 1;
				break;
			}
		}
		cout << ans << endl;
	}
}