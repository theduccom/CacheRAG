#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main(void){
	
	int n,m;
	
	while(scanf("%d %d", &n, &m) && n != 0 ){
		vector<int > a;
		int temp;
		int ans = 0;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &temp);
			a.push_back(temp);
		}
		
		sort(a.begin(),a.end(),greater<int>());
		
		for(int i = 0; i < n; i++){
			if( ( i+1)%m != 0  ) ans += a[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}