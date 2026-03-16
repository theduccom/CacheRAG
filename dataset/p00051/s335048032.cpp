#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))


int main(){
	int n,h,l;
	char s[9];
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		sort(s,s+8);
		l=atoi(s);
		sort(s,s+8,greater<char>());
		h=atoi(s);
		printf("%d\n",h-l);
	}
	return 0;
}