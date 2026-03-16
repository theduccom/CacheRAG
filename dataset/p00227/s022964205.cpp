#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N,M;
	while(cin >> N >> M,(N||M))
	{
		int a[1000],ans=0;
		for(int i=0; i<N; i++)
		{
			cin >> a[i];
			ans+=a[i];
		}

		sort(a,a+N);
		reverse(a,a+N);

		for(int i=M-1; i<N; i+=M)
			ans-=a[i];

		cout << ans << endl;
	}

}