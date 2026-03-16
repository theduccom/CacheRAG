#include<iostream>
#include<cmath>
using namespace std;
bool p(int n) {
	for (int i = 2; i <= sqrt(n); i++)if (n%i == 0)return false; return true;
}
int main(){
	int n;
	while (cin >> n){
		if (n == 0)return 0;
		for (int i = n;; i--){
			if (p(i) && p(i - 2)) {
				cout << i - 2 << ' ' << i << endl;
				goto end;
			}
		}
	end:;
	}
}