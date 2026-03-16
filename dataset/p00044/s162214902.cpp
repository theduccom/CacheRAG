// 2011/07/12 Tazoe

#include <iostream>
using namespace std;

void eratos(bool is_prime[], int n)
{
	if(n>=1)
		is_prime[0] = false;
	if(n>=2)
		is_prime[1] = false;

	for(int i=2; i<n; i++)
		is_prime[i] = true;

	for(int i=2; i<n; i++){
		if(!is_prime[i])
			continue;
		for(int j=i+i; j<n; j+=i)
			is_prime[j] = false;
	}
}

int main()
{
	bool is_prime[60000];
	eratos(is_prime, 60000);

	while(true){
		int n;
		cin >> n;
		if(cin.eof())
			break;

		int pre;
		for(pre=n-1; !is_prime[pre]; pre--);

		int pos;
		for(pos=n+1; !is_prime[pos]; pos++);

		cout << pre << ' ' << pos << endl;
	}

	return 0;
}