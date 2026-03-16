#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a;
	cin >> a;
	int data[8];
	int ans[a];
	for(int i=0;i<a;i++){
		int b;
		cin >> b;		
		data[0] = b%10;
		data[1] = b%100/10;
		data[2] = b%1000/100;
		data[3] = b%10000/1000;
		data[4] = b%100000/10000;
		data[5] = b%1000000/100000;
		data[6] = b%10000000/1000000;
		data[7] = b%100000000/10000000;
		
		sort(data,data+8);
		 

		int max = data[7]*10000000+data[6]*1000000+data[5]*100000+data[4]*10000+data[3]*1000+data[2]*100+data[1]*10+data[0];
		int min = data[0]*10000000+data[1]*1000000+data[2]*100000+data[3]*10000+data[4]*1000+data[5]*100+data[6]*10+data[7];

		ans[i]= max-min;
		

	}

	for(int i=0;i<a;i++){
		cout << ans[i] << endl;
	}
	return 0;
}