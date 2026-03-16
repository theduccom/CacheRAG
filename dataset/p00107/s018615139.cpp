#include "bits/stdc++.h"
using namespace std;

int main(){
	while(1){
		vector<double> x(3);
		cin>>x[0]>>x[1]>>x[2];
		if(x[0]==0&&x[1]==0&&x[2]==0)break;
		int n;
		cin>>n;
		sort(x.begin(),x.end());
		for(int i=0;i<n;i++){
			double r;
			cin>>r;
			int y=sqrt((x[0]*x[0])+(x[1]*x[1]));
			//cout<<r<<" "<<x[1]<<endl;
			if(2*r>y){
				cout<<"OK"<<endl;
			}else{
				cout<<"NA"<<endl;
			}
		}
	}
	return 0;
}