#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	vector<int> v(10);
	int v1, v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9],&v1,&v2) != EOF){
		double sum = 0;
		rep(i, 10) sum += v[i];
		double n = sum*v1/(v1+v2);
		sum = 0;
		rep(i, 10) if(sum+v[i] >= n){cout << i+1 << endl; break;} else sum += v[i];
	}
}