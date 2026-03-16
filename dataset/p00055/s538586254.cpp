#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<utility>
#include<cctype>
using namespace std;

#define ull unsigned long long
#define ll long long
#define rep(i,j) for(int i=0;i<j;++i)
#define loop(i,a,j) for(int i=a;i<j;++i)
#define mpi(it,table,T,E) for(map<T,E>::iterator it = table.begin();it!=table.end();++it)
#define PI 3.141592654
/*
ifstream fin("input.txt");
ofstream fout("output.txt");
#define cin fin
#define cout fout
*/

double mat[11]; 

double solve(int n){
	if( n == 1)return mat[1];
	if( n % 2 == 0){
		return mat[n] =  solve(n-1)*2.0;
	}
	return mat[n] = solve(n-1)/3.0;
}

int main(){
	double a ;
	while(scanf("%lf",&a) != EOF){
		memset(mat,0,sizeof(mat));
		mat[1] = a;
		solve(10);
		loop(i,1,11)mat[0] += mat[i];
		printf("%.8lf\n",mat[0]);
	}
	return 0;
}