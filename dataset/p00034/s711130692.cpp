#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const double ESP=1e-10;

int l[10],v1,v2;

int main(){
	do{
		if (scanf("%d,",&l[0])==EOF) break;
		int sum=l[0];
		FOR(i,1,10){
			scanf("%d,",&l[i]);
			sum+=l[i];
		}
		scanf("%d,%d",&v1,&v2);
		double p=(double)sum*v1/(v1+v2);
		double p2=0;
		REP(i,10){
			if (p<=p2+l[i]+ESP){
				printf("%d\n",i+1);
				break;
			}
			p2+=l[i];
		}
	}while(1);
	return 0;
}