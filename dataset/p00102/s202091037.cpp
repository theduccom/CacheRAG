#include <iostream>
#include <cstdio>

using namespace std;

string disp(int a){
	string ans = "     ";
	if(a == 0){
		ans = "    0";
		return ans;
	}
	ans[0] = (a / 10000) + '0';
	ans[1] = (a / 1000) % 10 + '0';
	ans[2] = (a / 100) % 10 + '0';
	ans[3] = (a / 10) % 10 + '0';
	ans[4] = a % 10 + '0';
	
	for(int i = 0; i <= 4; i++){
		if(ans[i] == '0'){
			ans[i] = ' ';
		}else{
			break;
		}
	}
	
	return ans;
}

int main(){
	
	int n;
	
	int mat[20][20];
	
	cin >> n;
	
	while(n != 0){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> mat[i][j];
			}
		}
		
		int sum;
		
		for(int i = 0; i < n; i++){
			sum = 0;
			for(int j = 0; j < n; j++){
				sum += mat[i][j];
			}
			mat[i][n] = sum;
		}
		
		for(int j = 0; j <= n; j++){
			sum = 0;
			for(int i = 0; i < n; i++){
				sum += mat[i][j];
			}
			mat[n][j] = sum;
		}
		
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				cout << disp(mat[i][j]);
			}
			cout << endl;
		}
		
		cin >> n;
	}
	return 0;
}