#include<cstdio>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

#define PII pair<int,int>

int main(void){
	int n;
	
	while(scanf("%d", &n) && n != 0){
		vector<PII> a;
		vector<PII> b;
		int num,km,KM;
		
		for(int i = 0; i < n; i++){
			scanf("%d%d%d", &num, &km, &KM);
			a.push_back(PII(km+KM,num));
		}
		
		sort(a.begin(),a.end(), greater<PII>() );
		
		printf("%d %d\n",a[0].second,a[0].first);
		
	}
	return 0;
}