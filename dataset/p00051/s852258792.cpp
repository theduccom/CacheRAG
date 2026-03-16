//0051
#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int n,a[8],i,max,min;
	cin>>n;
	while(n--){
		max = 0; min = 0;
		cin>>str;
		for(i = 0;i < 8;i++){
			a[i] = str[i] - '0';
		}

		sort(a,a+8,greater<int>());
		for(i = 0;i < 8;i++){
			max += a[i] * pow(10,7-i);
		}
		sort(a,a+8);
		for(i = 0;i < 8;i++){
			min += a[i] * pow(10,7-i);
		}
		cout<<max-min<<endl;
	}
	return 0;
}