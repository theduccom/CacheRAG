#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>
#include<cstdio>  

using namespace std;

int main(void){
	int n,m;
	int a;
	while(1){
		cin >> n >> m;
		if(n==0 && m==0)break;
		int ans=0;
		vector<int> num;
		for(a=0;a<n;a++){
			int nn;
			scanf("%d",&nn);
			num.push_back(nn);
		}
		sort(num.begin(),num.end(), greater<int>() );
		for(a=0;a<n;a++){
			ans+=num[a];
		}
		for(a=1*m-1;a<n;a+=m){
			ans-=num[a];
		}
		cout << ans << endl;
	}
	return 0;
}