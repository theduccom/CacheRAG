/*
 * src.cpp
 *
 *  Created on: 2016/08/04
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

typedef pair<int,int> P;

const int MAX_N=1e4;

int n;
P pa[MAX_N];

int main(){
	do{
		cin>>n;
		if (n){
			REP(i,n){
				int p,d1,d2;
				cin>>p>>d1>>d2;
				pa[i]=P(d1+d2,p);
			}
			sort(pa,pa+n);
			cout<<pa[n-1].second<<" "<<pa[n-1].first<<endl;
		}
	}while (n);
	return 0;
}