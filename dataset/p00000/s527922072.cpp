//
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <array>
#include <numeric>
#include <functional>

#define rep(i,n) for(int i=0;i<n;i++)
#define scanInt(i) scanf("%d", &i)

using namespace std;

int main(){

	int n=9;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << i << "x" << j << "=" << i*j <<endl;
		}
	}

	return 0;
}