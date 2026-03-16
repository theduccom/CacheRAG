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
	double a,s;
	while(~scanf("%lf",&a)){
		s=a;
		rep(i,9){
			if(i%2)a/=3;
			else a*=2;
			s+=a;
		}
		printf("%lf\n",s);
	}
	return 0;
}