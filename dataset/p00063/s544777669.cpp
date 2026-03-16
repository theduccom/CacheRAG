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
	char s[101],t[101];
	int cnt=0;
	while(~scanf("%s",s)){
		strcpy(t,s);
		reverse(t,t+strlen(t));
		cnt+=strcmp(s,t)==0;
	}
	printf("%d\n",cnt);
	return 0;
}