#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	int a,b,c;
	int u=0,v=0;
	while (scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if (a*a+b*b==c*c){
			u++;
		}
		if (a==b){
			v++;
		}
	}
	printf("%d\n%d\n",u,v);
	return 0;
}