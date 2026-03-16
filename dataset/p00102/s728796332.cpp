#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int fig[11][11];
	int n;
	while(cin >> n){
		if(!n)
			break;
		int ans = 0;
		for(int i=0;i<n;i++){
			int sum = 0;
			for(int j=0;j<n;j++){
				cin >> fig[i][j];
				sum += fig[i][j];
			}
			fig[i][n] = sum;
			ans += sum;
		}
		for(int j=0;j<n;j++){
			int sum = 0;
			for(int i=0;i<n;i++){
				sum += fig[i][j];
			}
			fig[n][j] = sum;
		}
		fig[n][n] = ans;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout << setw(5) << fig[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}