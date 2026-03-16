#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

int m10pow(int n){
int	res = 1;
	rep(i,n) res *= 10;
	return res;
}

int main(void){

string wk;
int n,su[8];
	cin >> n;
	rep(z,n){
		cin >> wk;
		rep(i,8) su[i]= wk[i] - '0';
		sort(su,su+8);
		int wkmin=0, wkmax=0;
		rep(i,8) wkmax += su[i] * m10pow(i);
		rep(i,8) wkmin += su[7-i] * m10pow(i);
//		printf("%d-%d\n",wkmax,wkmin);
		cout << wkmax - wkmin << endl; 
	}
	return 0;
	
	
}