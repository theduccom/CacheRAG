#include <iostream>

using namespace std;

bool memo[1000001];
int n, x, m, price[30];

bool sosuu(int k) { 
	if (k == 2) return true;
	else if (k < 2) return false;
	else if (k % 2 == 0) return false;
	for (int i = 3; i*i<=k; i += 2)
		if (k % i == 0) return false;
	return true;
}
int next(){
	memo[0] = true;
	for(int i = 0 ; i < n ; i++){
		for(int j = price[i] ; j <= x ; j++)
			memo[j] |= memo[j-price[i]];
	}
}

int main() {
	while (cin >> n >> x, n || x) {
		for (int i = 0; i < n; ++i)
			cin >> price[i];
		for (int i = 0; i < 1000001; ++i) memo[i] = 0;
		m = 0;
		memo[0] = true;
		for(int i = 0 ; i < n ; i++)
			for(int j = price[i] ; j <= x ; j++)
				memo[j] |= memo[j-price[i]];
		
		for (int i = x; i; --i)
			if (memo[i] && sosuu(i)) {
				m = i;
				break;
			}

		if (m) cout << m << endl;
		else cout << "NA" << endl;
	}
	return 0;
}