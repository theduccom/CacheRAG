#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void){
	vector<int> p;
	bool isPrime[10000];

	fill(isPrime, isPrime+10000, true);

	for(int i=2;i<10000;i++){
		if(isPrime[i]){
			p.push_back(i);
			for(int j=2;i*j<10000;j++){
				isPrime[i*j] = false;
			}
		}
	}
	int n;
	while(cin >> n && n){
		vector<int>::iterator upper = upper_bound(p.begin(),p.end(),n), lower;
		--upper;
		lower = upper;
		--lower;
		while(true){
			if(*upper - *lower == 2) break;
			--upper;
			--lower;
		}

		cout << *lower << " " << *upper << endl;

	}
}