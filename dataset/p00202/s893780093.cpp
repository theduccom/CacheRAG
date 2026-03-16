#include<map>
#include<list>
#include<queue>
#include<stack>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];
int m[1000000];
int s[1000000];

int isPrime(int x){
	if (x < 2)return 0;
	else if (x == 2) return 1;
	if (x % 2 == 0) return 0;
	for (int i = 3; i*i <= x; i += 2){
		if (x%i == 0) return 0;
	}
	return 1;
}


int main(){
	int n; int x; int temp = 0;
	for (int i = 0; i <= 1000000; i++){
		s[i] = isPrime(i);
	}
	while (cin >> n >> x, n, x){
		memset(a, 0, sizeof(a));
		memset(m, 0, sizeof(m));
		for (int i = 0; i < n; i++){
			cin >> a[i];
			m[a[i]] = 1;
		}
		for (int i = 0; i <= x; i++){
			if (m[i] == 1){
				for (int j = 0; j < n; j++){
					if (x >= a[j] + i){
						m[a[j] + i] = 1;
					}
				}
			}
		}
		bool flag = false;
		for (int i = x; i >0; i--){
			if (m[i] == 1 && s[i] == 1){
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (!flag) cout << "NA" << endl;
	}
	return 0;
}