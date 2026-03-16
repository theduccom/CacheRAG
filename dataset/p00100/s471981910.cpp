#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;
#define int long long

int A[1000000];

signed main(){
	int N,B,C;
	while(cin>>N,N){
		int cnt[4001]={};
		bool NAflag=true,used[4001]={};
		for(int i=0;i<N;i++){
			cin>>A[i]>>B>>C;
			cnt[A[i]] += B*C;
		}
		for(int i=0;i<N;i++){
			if(cnt[A[i]]>=1000000 && used[A[i]]==false){
				printf("%d\n",A[i]); used[A[i]] = true; NAflag = false;
			}
		}
		if(NAflag==true) puts("NA");
	}
    return 0;
}