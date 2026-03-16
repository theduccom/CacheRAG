#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[8];
	int data;
	int ans[1000000];

	for(int i=0;i<n;i++){
		cin >> data;
		a[0] = data%10;
		a[1] = data/10%10;
		a[2] = data/100%10;
		a[3] = data/1000%10;
		a[4] = data/10000%10;
		a[5] = data/100000%10;
		a[6] = data/1000000%10;
		a[7] = data/10000000%10;

		sort(a,a+8);

		int mb = a[7]*10000000+a[6]*1000000+a[5]*100000+a[4]*10000+
				a[3]*1000+a[2]*100+a[1]*10+a[0];

		int ms = a[0]*10000000+a[1]*1000000+a[2]*100000+a[3]*10000+
				a[4]*1000+a[5]*100+a[6]*10+a[7];

		ans[i] = mb-ms;
	}

	for(int i=0;i<n;i++){
		cout << ans[i] << endl;
	}

	return 0;
}