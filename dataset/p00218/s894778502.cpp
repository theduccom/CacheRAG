#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define clear(v) memset(v,0,sizeof(v))
#define ALL(v) (v).begin(),(v).end()


int main(){
	int n;
	while (cin >> n, n){
		rep(i, n){
			int p[3]; rep(i, 3) cin >> p[i];
			double ave = (p[0] + p[1] + p[2]) / 3.0;
			char ans;
			if (p[0] == 100 || p[1] == 100 || p[2] == 100){
				ans = 'A';
			} else if ((p[0]+p[1])/2.0>=90){
				ans = 'A';
			} else if (ave >= 80){
				ans = 'A';
			} else if (ave >= 70){
				ans = 'B';
			} else if (ave >= 50 && (p[0] >= 80 || p[1] >= 80)){
				ans = 'B';
			} else{
				ans = 'C';
			}
			cout << ans << endl;
		}
	}
}