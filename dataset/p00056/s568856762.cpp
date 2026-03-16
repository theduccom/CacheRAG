#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> make()
{
	bool b[50001] = {};
	for(int i = 2; i*i < 50001; ++i){
		if(!b[i]){
			for(int j = i*i; j < 50001; j += i){
				b[j] = true;
			}
		}
	}
	vector<int> prime;
	prime.reserve(50000);
	for(int i = 2; i < 50001; ++i){
		if(!b[i]){
			prime.push_back(i);
		}
	}

	return prime;
}
	

int main()
{
	int n;
	vector<int> prime = make();
	while(cin >> n, n){
		int ans = 0;
		for(int i = 0; i < (int)prime.size(); ++i){
			if(prime[i] > n) break;
			if(binary_search(prime.begin() + i, prime.end(), n - prime[i])){
				ans++;
			}
		}
		cout << ans << endl;
	}
}