#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

// 1ÌÆ«trueÉÈÁÄàCÉµÈ¢
bool isPrime(int x){
	for(int i = 2, lim = sqrt(x); i <= lim; ++i){
		if(x % i == 0){ return false; }
	}
	return true;
}

bool table[1000001];

int main(){
	while(true){
		int n, x;
		cin >> n >> x;
		if(n == 0 && x == 0){ break; }
		memset(table, 0, sizeof(bool) * 1000001);
		table[0] = true;
		while(n--){
			int price;
			cin >> price;
			for(int i = 0; i <= x - price; ++i){
				if(table[i]){ table[i + price] = true; }
			}
		}
		int sum = 0;
		for(int i = x; i > 0; --i){
			if(table[i] && isPrime(i)){
				sum = i;
				break;
			}
		}
		if(sum == 0){
			cout << "NA" << endl;
		}else{
			cout << sum << endl;
		}
	}
	return 0;
}