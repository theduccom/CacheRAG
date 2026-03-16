#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> a(3);
	while(cin>>a[0]>>a[1]>>a[2],a[0]||a[1]||a[2]){
		int n;
		cin>>n;
		sort(a.begin(),a.end());
		double t=(double)a[0]*a[0]+a[1]*a[1];
		// cout<<t<<endl;
		for(int i=0;i<n;i++){
			int r;
			cin>>r;
			if(4*r*r>t) cout<<"OK\n";
			else cout<<"NA\n";
		}
	}
	return 0;
}