#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	
	vector<double> a;
	double b;
	while(cin>>b){
		a.push_back(b);
	}
	
	sort(a.begin(),a.end());
	
	printf("%lf\n",a[a.size()-1]-a[0]);
}