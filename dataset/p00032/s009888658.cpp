#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;


int solve(int n, int sum, int amax) {
	if (n == 0) {
		if (sum == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (amax*n < sum ||0 * n>sum)return 0;
	else {
		int nans=0;
		for (int x =0; x <= amax; ++x) {
			nans+=solve(n-1,sum-x,x-1);
		}
		return nans;
	}
}


int main() {
	int a,b,c;
	int h=0,ch=0;
	while (scanf("%d,%d,%d",&a,&b,&c)!=-1) {
		vector<int>v{ a,b,c };
		a=v[0];
		b=v[1];
		c=v[2];
		if(a==b)h++;
		if(a*a+b*b==c*c)ch++;
	}
	cout<<ch<<endl<<h<<endl;
	return 0;
}
