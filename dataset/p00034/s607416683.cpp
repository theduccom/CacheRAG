#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<map>
#include<queue>
#include<set>

using namespace std;
typedef pair<int,int> PII;
typedef long long ll;

int main(){
  int len[10],l1,l2,pos;
	while(scanf("%d",&len[0])+1){
		for(int i=1;i<10;i++){
			scanf(",%d",&len[i]);
			len[i] += len[i-1];		
		}
		scanf(",%d,%d",&l1,&l2);
		pos = len[9] * l1;
		int ans;
		for(int i=0;i<10;i++){
			if(len[i] * ( l1 + l2 )  < pos)
				ans = i;
			else
				break;
		}
		ans += 2;
		cout<<ans<<endl;
	}
	
  return 0;
}