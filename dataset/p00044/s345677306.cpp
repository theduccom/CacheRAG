#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> prime;

int main(void) {
	for(int i = 2;i < 60000;i++) {
		bool isPrime = true;
		for(auto e:prime) {
			if(i % e == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) prime.push_back(i);
	}
	int n;
	while(cin >> n) {
		auto eq = equal_range(prime.begin(),prime.end(),n);
		cout << *(eq.first-1) << " " << *(eq.second) << endl;
	}
}

