#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	while(1){
	int n; cin >> n ;
	if(!n) break;
	int num[10][10];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) cin >> num[i][j];
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=num[i][j];
			// if(j) cout << ' ' ;
			cout.width(5);
			cout << num[i][j] ;
		};
		cout.width(5);
	cout << sum << '\n' ;
	};
	int* sum=new int[n]; int nsum=0;
	for(int i=0;i<n;i++){
		sum[i]=0;
		// if(i) cout << ' ' ;
		for(int j=0;j<n;j++) sum[i]+=num[j][i];
		cout.width(5);
		cout << sum[i] ;
		nsum+=sum[i];
	};
	cout.width(5);
	cout << nsum << '\n' ;
	};
}