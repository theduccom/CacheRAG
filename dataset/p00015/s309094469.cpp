#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int add(int a[], int b[]);

int main(){
	const int smax = 81;
	int n;
	int a[smax + 1];
	int b[smax + 1];
	int sum[smax + 1];
	string s1, s2;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		if(s1.size() >= smax || s2.size() >= smax){
			cout << "overflow" << endl;
		} else {
			int i = 1;
			for(int i = 1; i <= smax; i++){
				a[i] = 0; b[i] = 0; sum[i] = 0;
			}
			for(string::const_reverse_iterator iter = s1.rbegin();
				iter != s1.rend(); iter++)
			{
				a[i++] = ((int)(*iter) - 48);
			}
			i = 1;
			for(string::const_reverse_iterator iter = s2.rbegin();
				iter != s2.rend(); iter++)
			{
				b[i++] = ((int)(*iter) - 48);
			}
			int c = 0;
			for(int j = 1; j < smax; j++){
				sum[j] = (a[j] + b[j] + c) % 10;
				c = (a[j] + b[j] + c) / 10;
			}
			if(c){
				cout << "overflow" << endl;
			} else {
				int sum_sz = max(s1.size(), s2.size());
				if(sum[sum_sz + 1]) cout << 1;
				for(int k = sum_sz; k >= 1; k--)
					cout << sum[k];
				cout << endl;
			}
		}
	}
	return 0;
}