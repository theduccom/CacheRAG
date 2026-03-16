#include <cmath>
#include <iostream>
using namespace std;

int a[20000];
int sum[20000];
int n,s;
int main() {
	a[0] = 2;
	sum[0] = 2;
	cin >> n;
	while(n!=0) {
		for(int i=1 ; i<n; ++i) {
			int k = a[i-1] + 1;
			while(a[i]==0) {
				while(k%a[s]!=0) {
					if(a[s]*a[s] > k) {
						a[i] = k;
						//cout << i+1 << "th prime is" << a[i] << endl;
						sum[i] = sum[i-1] + a[i];
						break;
					}
					++s;
				}
				s = 0;
				++k;
			}
		}
		cout << sum[n-1] << endl;
		cin >> n;
	}
}
		