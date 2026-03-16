#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int gcd(int x, int y){
	return y ? gcd(y,x%y) : x;
}

int main(){
	int d[10],v1,v2;
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",d,d+1,d+2,d+3,d+4,d+5,d+6,d+7,d+8,d+9,&v1,&v2)){
		int dis=0;
		rep(i,10)dis+=d[i];
		int j;
		//printf("dis:%d  k:%lf\n",dis,k);
		int sum = 0;
		for(j=0; j<10; j++){
			sum += d[j];
			if( sum*(v1+v2)>=dis*v1 ){
				printf("%d\n",j+1);
				break;
			}
		}
		
	}
	return 0;
}