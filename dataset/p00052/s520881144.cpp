#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	int n;
	while(cin >> n,n){
		int cnt = 0;
		while(n /= 5){
			cnt += n;
		}
		printf("%d\n",cnt);
	}
	return 0;
}