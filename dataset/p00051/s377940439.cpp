#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

	int n;
	cin >> n;

	for(int j=0; j<n; j++){
		int d=0;
		int a[8];
		int n1=0,n2=0;
	
		cin >>d;

		for(int i=0; i<8; i++){
			a[i]=d%10;
			d/=10;
		}
		
		stable_sort(a,a+8);
	
		for(int i=0; i<8; i++){
			n1+=a[7-i]*pow(10,i);
			n2+=a[i]*pow(10,i);
		}

		cout << n2-n1 << endl;

	}
}