#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n=0;
	char a[8],b[8];
	int A[8],B[8];

	int ans1=0,ans2=0,sum=0;

	cin >> n;

	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			cin >> a[j];
		}

		for(int j=0;j<8;j++){
			A[j] = static_cast<int>(a[j]);
		}	

		sort(A,A+8);

		for(int j=0;j<8;j++){
			B[j] = A[7-j];
		}

		for(int j=0;j<8;j++){
			a[j] = static_cast<char>(A[j]);
			b[j] = static_cast<char>(B[j]);
		}	

		ans1 = atoi(b);
		ans2 = atoi(a);
		sum = ans1-ans2;

		cout << sum << endl;

	}

	return 0;			
	}