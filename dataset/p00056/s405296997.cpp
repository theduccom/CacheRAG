#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> prime;
	bool a[50001]; for(int i=0;i<50001;i++) a[i]=true;
	a[0]=a[1]=false;
	for(int i=0;i<50000;i++)
	{
		if(!a[i]) continue;
		prime.push_back(i);
		for(int j=i*2;j<50000;j+=i) a[j]=false;
	}
	while(1)
	{
		int n ; cin >> n ;
		if(!n) return 0;
		int sum=0; int len=prime.size();
		for(int i=0;i<len;i++)
		{
			int tmp=n-prime[i];
			if(tmp>n/2) continue;
			if(0<=tmp && tmp<=50000 && a[tmp]==true)
			{
				sum++; 
		//		cout << tmp << ' ' << prime[i] << endl;
			}
		}
		cout << sum << endl;
	}
}