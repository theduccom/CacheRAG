#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int n,p,d1,d2;
pair<int,int> pa[10000];

int main(){
	while(cin>>n){
		if(!n)return 0;
		for(int i=0;i<n;i++){
			cin>>p>>d1>>d2;
			pa[i]=make_pair(d1+d2,p);
		}
		sort(pa,pa+n);
		cout<<pa[n-1].second<<" "<<pa[n-1].first<<endl;
	}
}