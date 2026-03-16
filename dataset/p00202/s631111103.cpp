#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

#define pb push_back
#define MAX 1000000

int dp[MAX];

using namespace std;

int main(void)
{
	int n,x;
	int i1,i2;

	while(1){
		cin>>n>>x;
		if(n+x==0) break;

		vector<int> v(n);
		memset(dp,0,sizeof(dp));

		for(i1=0;i1<n;i1++){
			cin>>v[i1];
			dp[v[i1]]=1;
		}

		for(i1=0;i1<=x;i1++){
			if(dp[i1]==1) {
				for(i2=0;i2<n;i2++){
					if((i1+v[i2])<MAX) dp[i1+v[i2]]=1;
				}
			}
		}

		for(i1=x;i1>0;i1--){
			if(dp[i1]==1) {

				for(i2=2;i2*i2<=i1;i2++){
					if(i1%i2==0) break;
				}
				if(i2*i2>i1) break;
			}
		}

		if(i1==0) cout<<"NA"<<endl;
		else cout<<i1<<endl;
	}


	return 0;

}