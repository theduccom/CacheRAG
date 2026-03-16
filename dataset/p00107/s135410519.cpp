#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int a[3];
	int n;
	int r;
	while(cin>>a[0]>>a[1]>>a[2],a[0]){
		sort(a,a+3);
		int x=(a[0]*a[0]+a[1]*a[1])/4;
		cin>>n;
		while(n--){
			cin>>r;
			r*=r;
			if(x<r)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
	return 0;
}