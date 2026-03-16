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
	int t,b[4]={0};
	char s[9];
	while(~scanf("%d,%s",&t,s)){
		if(s[1]=='B')b[2]++;
		else if(s[0]=='A')b[0]++;
		else if(s[0]=='B')b[1]++;
		else b[3]++;
	}
	rep(i,4)printf("%d\n",b[i]);
	return 0;
}