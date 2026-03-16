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

int main(){
	int a,b,c,hisi=0,chou=0;
	while(~scanf("%d,%d,%d",&a,&b,&c)){
		if( a==b ){
			if( a>c ){
				if( b+c>a )hisi++;
			}else{
				if( a+b>c )hisi++;
			}
		}
		else if( a*a+b*b==c*c )chou++;
	}
	printf("%d\n%d\n",chou,hisi);
	return 0;
}