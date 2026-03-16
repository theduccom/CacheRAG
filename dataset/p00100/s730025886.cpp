#include<iostream>
#include<algorithm>

using namespace std;
typedef long long Int;
Int n, b, c, num[4320];
Int sum[4320];
int main(){
	while(cin >> n, n){
		fill(sum, sum + 4320, 0);
		for(int i = 0;i < n;i++){
			cin >> num[i] >> b >> c;
			sum[num[i]] += b * c;
		}
		bool na = true;
		for(int i = 0;i < n;i++){
			if(sum[num[i]] >= 1000000){
				na = false;
				cout << num[i] << endl;
				sum[num[i]] = 0;
			}
		}
		if(na)cout << "NA" << endl;
	}
	return 0;
}