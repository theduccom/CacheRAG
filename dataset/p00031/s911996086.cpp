#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int wg[10];
	wg[9]=1;
	for(int i=8;i>=0;i--){
		wg[i]=wg[i+1]*2;
	}
	int n;
	while(scanf("%d",&n)!=EOF){
		vector<int> res;
		for(int i=0;i<10;i++){
			if(n-wg[i]>=0){
				n-=wg[i];
				res.push_back(wg[i]);
			}
		}
		sort(res.begin(),res.end());
		printf("%d",res[0]);
		for(int i=1;i<res.size();i++){
			printf(" %d",res[i]);
		}
		printf("\n");
	}
}