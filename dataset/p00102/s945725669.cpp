#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int data[10+1][10+1];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> data[i][j];
			}
		}

		int all_sum = 0;

		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				sum += data[i][j];
			}
			data[i][n] = sum;
			all_sum += sum;
		}




		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				sum += data[j][i];
			}
			data[n][i] = sum;
		}
			data[n][n] = all_sum;


		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				printf("%5d", data[i][j]);
			}
			cout << endl;
		}
	}
}