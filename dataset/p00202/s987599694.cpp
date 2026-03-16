// 2011/01/14 Tazoe

#include <iostream>
using namespace std;

void eratos(bool prime[], int n)
{
	if(n>=1)
		prime[0] = false;
	if(n>=2)
		prime[1] = false;

	for(int i=2; i<n; i++)
		prime[i] = true;

	for(int i=2; i<n; i++){
		if(!prime[i])
			continue;
		for(int j=i+i; j<n; j+=i)
			prime[j] = false;
		if(n<i*i)
			return;
	}
}

int main()
{
	bool prm[1000001];
	eratos(prm, 1000001);

	while(true){
		int n, x;
		cin >> n >> x;
		if(n==0&&x==0)
			break;

		int K[30];
		for(int i=0; i<n; i++)
			cin >> K[i];

		bool T[1000001];
		T[0] = true;
		for(int i=1; i<=x; i++)
			T[i] = false;

		for(int i=0; i<n; i++)
			for(int j=K[i]; j<=x; j++)
				if(T[j-K[i]])
					T[j] = true;

		int ans = -1;
		for(int i=x; i>=0; i--)
			if(T[i]&&prm[i]){
				ans = i;
				break;
			}

		if(ans!=-1)
			cout << ans << endl;
		else
			cout << "NA" << endl;
	}

	return 0;
}