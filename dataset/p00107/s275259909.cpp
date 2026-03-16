#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
	int a[3],n;
	while(cin>>a[0]>>a[1]>>a[2],a[0]||a[1]||a[2]){
		sort(a,a+3);
		int l=a[0]*a[0]+a[1]*a[1];
		cin>>n;
		for(int i=0,r;i<n;++i){
			cin>>r;
			cout<<(((2*r)*(2*r)>l)?"OK":"NA")<<endl;
		}
	}
	return 0;
}