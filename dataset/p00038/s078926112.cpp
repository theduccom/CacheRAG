#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int i;
	int t[5];
	while(scanf("%d,%d,%d,%d,%d",&t[0],&t[1],&t[2],&t[3],&t[4]) != EOF)
	{
		int j=0;
		int card[14]={0};
		int num[5]={0};
		for(i=0;i<5;i++)
		{
			card[t[i]]++;
		}
		for(i=1;i<14;i++)
		{
			num[card[i]]++;
		}
		if(num[4])
		{
			cout << "four card" << endl;
			continue;
		}
		if(num[3])
		{
			if(num[2])
			{
				cout << "full house" << endl;
				continue;
			}
			else
			{
				cout << "three card" << endl;
				continue;
			}
		}
		if(num[2]==2)
		{
			cout << "two pair" << endl;
			continue;
		}
		if(num[2])
		{
			cout << "one pair" << endl;
			continue;
		}
		for(i=1;i<11;i++)
		{
			if(card[i]&&card[i+1]&&card[i+2]&&card[i+3]&&card[(i+4)%13])
			{
				cout << "straight" << endl;
				j++;
				break;
			}
		}
		if(j==1)continue;
		cout << "null" << endl;
	}
	return 0;
}