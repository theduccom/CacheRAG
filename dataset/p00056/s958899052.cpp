#include<iostream>
#include<cmath>
using namespace std;
bool pr[50001];
int prime[114514];
int length = 0; 
void insert(int p) { prime[length] = p; pr[p] = true; length++; return; }
int main() {
	insert(2);
	for (int i = 3; i <= 50000; i += 2) {
		for (int j = 0; j < length; j++)
			if (i%prime[j] == 0)goto cont;
			else if (prime[j] > sqrt(i))break;
			insert(i);
		cont:;
	}
	int n;
	while (cin >> n){
		if (!n)return 0;
		int sum = 0;
		for (int i = 2; i <= n / 2; i++)
			if (pr[i] && pr[n - i])
				sum++;
		cout << sum << endl;
	}
}