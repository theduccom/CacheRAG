#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pe;
int main(void)
{
	int i,j,k,n;

	while(1) {
		cin>>n;	
		vector<pair<int,int> > pp(n);
		if(n==0) break;
		for(i=0;i<n;i++) {
			int a,b;
			cin>>pp[i].second>>a>>b;
			pp[i].first=a+b;
		}
		sort(pp.begin(),pp.end());
		cout<<pp[n-1].second<<" "<<pp[n-1].first<<endl;
	}
}