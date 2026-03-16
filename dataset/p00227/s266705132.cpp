// 2011/01/08 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n, m;
		cin >> n >> m;
		if(n==0&&m==0)
			break;

		int p[1000];
		for(int i=0; i<n; i++)
			cin >> p[i];

		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				if(p[i]<p[j]){
					int tmp = p[i];
					p[i] = p[j];
					p[j] = tmp;
				}

		for(int i=m-1; i<n; i+=m)
			p[i] = 0;

		int sum = 0;
		for(int i=0; i<n; i++)
			sum += p[i];

		cout << sum << endl;
	}

	return 0;
}