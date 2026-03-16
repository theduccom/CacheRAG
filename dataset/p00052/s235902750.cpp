#include <iostream>
using namespace std;
void solve(long long n){
	int cnt[2] ={0,0};
	for(long long i = 1; i <=n; i++){
		long long t = i;
		while(!(t % 2)){
			t /= 2;
			cnt[0]++;
		}
		while(!(t % 5)){
			t /= 5;
			cnt[1]++;
		}
	}
	cout << min(cnt[0], cnt[1]) << endl;
}
int main(){
	long long n;
	while(cin >> n, n){
		solve(n);
	}
	return 0;
}