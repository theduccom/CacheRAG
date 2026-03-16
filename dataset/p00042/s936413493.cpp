#include <string>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

int W,N;
int c[1000],w[1000];
int t[10000+10];

int main()
{
	for (int i = 1; ; i++){
		cin>>W;
		if(W == 0) break;
		cin>>N;
		for(int j =0 ; j < N; j++) scanf("%d,%d",c+j,w+j);
		printf("Case %d:\n",i);
		memset(t,-1,sizeof(t));
		t[0] = 0;
		for (int i = 0; i < N; i++){
			for (int j = W - w[i]; j >= 0; j--){
				if(t[j] == -1) continue;
				t[j+w[i]] = max(t[j+w[i]],t[j] + c[i]);
			}
		}
		int ans_id = max_element(t,t+W+1) - t;
		printf("%d\n%d\n",t[ans_id],ans_id);
	}

}