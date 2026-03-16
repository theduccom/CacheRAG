#include <iostream>
using namespace std;

#define MN 60000

int main()
{
	bool pr[MN] = {0};
	for(int i=2; i<MN; i++) pr[i]=1;
	
	for(int i=2; i*i<MN; i++)
	{
		if(pr[i])
		for(int j=i*2; j<MN; j+=i)
		{
			pr[j]=0;
		}
	}

	int n;
	while(cin >> n)
	{
		for(int i=n-1; i>1; i--)
		{
			if(pr[i]) { cout << i << " "; break; }
		}
		for(int i=n+1; i<MN; i++)
		{
			if(pr[i]) { cout << i << endl; break; }
		}
	}
}