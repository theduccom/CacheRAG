#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		vector<int> vsum(n);
		int hsum = 0;
		int k;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				cin >> k;
				printf("%5d", k);
				sum+=k;
				vsum[j]+=k;
			}
			printf("%5d\n", sum);
			hsum += sum;
		}
		vsum.push_back(hsum);

		for(int i = 0; i < n+1; i++){
			printf("%5d", vsum[i]);
		}
		cout << endl;
	}

	return 0;
}