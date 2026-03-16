#include <iostream>
#include <vector>
using namespace std;

int main() {
	int max,n;
	vector<int> id;
	vector<int> sum;
	vector<int> table;
	
	id.resize(4000);
	sum.resize(4000);
	table.resize(4000);
	
	while(cin>>n,n){
		int i,f;
		long long int a,b;
		max = 0;
		
		for(int j=0;j<4000;++j){
			id[j] = 0;
			sum[j] = 0;
			table[j] = 0;
		}
		
		for(;n;--n){
			cin>>i>>a>>b;
			
			if(table[i-1]==0){
				id[max]=i;
				table[i-1] = max+1;
				++max;
			}
			if(a*b>=1000000)sum[table[i-1]-1] = 1000000;
			else if(sum[table[i-1]-1]<1000000)sum[table[i-1]-1] += a*b;
			
		}
		f=0;
		for(int j=0;j<max;++j){
			if(sum[j]>=1000000){
				cout<<id[j]<<endl;
				f=1;
			}
		}
		if(!f)cout<<"NA"<<endl;
	}
	return 0;
}