#include <iostream>
using namespace std;

const int MAX_X = 1000000;
bool sosu[MAX_X+1];
bool sum[MAX_X+1];
int costs[30];

int main(){
	for(int i = 2; i <= MAX_X; i++) sosu[i] = true;
	for(int i = 2; i * i <= MAX_X; i++){
		if(sosu[i] == true)
			for(int j = 2; i * j <= MAX_X; j++)
				sosu[i*j] = false;
	}
	sosu[0] = sosu[1] = false;
	int n, x;
	while(cin >> n >> x){
		if(n == 0 && x == 0) break;
		for(int i = 1; i <= x; i++){
			sum[i] = false;
		}
		sum[0] = true;
		for(int i = 0; i < n; i++){
			cin >> costs[i];
		}
		for(int i = 0; i < x; i++){
			if(sum[i])
				for(int j = 0; j < n; j++){
					if(i + costs[j] <= x)
						sum[i+costs[j]] = true;
				}
		}
		int m = x;
		while(m > 1){
			if(sum[m] && sosu[m]) break;
			m--;
		}
		if(m == 1) cout << "NA" << endl;
		else cout << m << endl;
	}
	return 0;
}