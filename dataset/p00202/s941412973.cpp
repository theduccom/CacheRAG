#include<iostream>
using namespace std;
bool prime(int);
int main()
{
while (true){
	bool dp[1000001] = { false };
	int a[31];
	int n, v;
	cin >> n >> v;
	if (n == 0){
		break;
	}
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = true;
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 <= v - a[i]; i2++){
			if (dp[i2]){
				dp[i2 + a[i]] = true;
			}
		}
	}

	bool flag = true;
	for (int i = 1000000; i > 0; i--){
		if (dp[i] && !prime(i)){
			flag = false;
			cout << i << endl;
			break;
		}
	}
	if (flag)
		cout << "NA" << endl;
}

}
bool prime(int x){
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return true;
	return false;
}