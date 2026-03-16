#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){

	vector<double> hold;
	double v  = 0;
	int i = 0;
	while(v < 300.0){
		int y = i * 5;
		double t = sqrt(y / 4.9);
		double tmp = 9.8 * t;
		hold.push_back(tmp);
		i++;
		v = tmp;
	}
	
	while(cin >> v){
		rep(i, hold.size()){
			if(v < hold[i]){
				cout << i + 1 << endl;
				break;
			}
		}
		
	}
	return 0;
}