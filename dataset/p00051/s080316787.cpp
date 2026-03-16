#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int n1;
	cin>>n1;
	for(int l=0;l<n1;++l){
		int a[8],max=0,min=0,n;
		cin>>n;
		for(int i=0;i<8;++i){
			a[i]=n%10;
			n/=10;
		}
		sort(a,a+8);
		for(int i=7;i>=0;--i){
			max*=10;
			max+=a[i];
		}
		for(int i=0;i<8;++i){
			min*=10;
			min+=a[i];
		}
		cout<<max-min<<endl;
	}
}