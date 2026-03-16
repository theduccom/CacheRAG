#include<iostream>
#include<vector>
#include<utility>
using namespace std;
typedef pair<int, int>p;
bool ip[20005];
vector<int>prime;
vector<p> twin;

void eratos() {
	for (int i = 0;i < 20005;i++)ip[i] = true;

	ip[0] = ip[1] = false;

	for (int i = 2;i*i < 20005;i++) {
		if (ip[i] == true) {
			for (int j = i * i;j < 20005;j += i)ip[j] = false;
		}
	}

	for (int i = 0;i < 20005;i++) {
		if (ip[i]) {
			prime.push_back(i);
		}
	}
	return;
}

int main() {
	int n;
	eratos();

	for (int i = 0;i < prime.size()-1;i++) {
		if (prime[i + 1] - prime[i] == 2) {
			twin.push_back(make_pair(prime[i], prime[i+1]));
		}
	}
	int x = twin.size();

	while (cin >> n, n) {
		for (int i = 1;i<x;i++) {
			if (twin[i].second > n) {
				cout << twin[i - 1].first << ' ' << twin[i - 1].second << endl;
				break;
			}
		}
	}
	return 0;
}