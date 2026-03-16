#include <iostream>
using namespace std;

#define MN 50001

int main()
{
	bool pr[MN] = {0};
	for(int i=2; i<MN; i++) pr[i]=1;

	for(int i=2; i*i<MN; i++)
	{
		if(pr[i])
		for(int j=i*2; j<MN; j+=i)
		{
			pr[j] = 0;
		}
	}

	int n,c;
	while(cin >> n, n)
	{
		c=0;
		for(int i=2; i<=n/2; i++)
		{
			if(pr[i] && pr[n-i]) c++;
		}
		cout << c << endl;
	}
}