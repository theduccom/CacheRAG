#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int a[n+1][n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin >> a[j][i];
			a[n][i] = 0;
			for(int j=0;j<n;j++) a[n][i] += a[j][i];
		}
		for(int i=0;i<=n;i++){
			a[i][n] = 0;
			for(int j=0;j<n;j++) a[i][n] += a[i][j];
		}
		for(int i=0;i<=n;i++){
			cout << right << setw(5) << a[0][i];
			for(int j=1;j<=n;j++) cout << right << setw(5) << a[j][i];
			cout << endl;
		}
	}
}