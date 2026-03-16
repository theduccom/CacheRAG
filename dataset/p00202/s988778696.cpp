#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int p[1000001];
int dp[1000001];
int main(){
	int n,x;
	while(cin >> n >> x && n){
		for(int i = 0 ; i < 1000001 ; i++) p[i] = 1 , dp[i] = 0;
		p[0] = p[1] = 0;
		for(int i = 1 ; i*i <= 1000000 ; i++){
			if( p[i] ){
				for(int j = i * i ; j <= 1000000 ; j+=i){
					p[j] = 0;
				}
			}
		}
		dp[0] = 1;
		for(int i = 0 ; i < n ; i++){
			int t;
			cin >> t;
			for(int j = t ; j < 1000001 ; j++){
				dp[j] |= dp[j-t];
			}
		}
		while(x>0 && (p[x] == 0 || dp[x] == 0) ){
			x--;
		}
		if( x == 0 ){
			cout << "NA" << endl;
		}else{
			cout << x << endl;
		}
	}
}