#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i) = 0;(i)<(n);(i)++)
#define pb push_back
#define mp make_pair
#define All(X) X.begin(),X.end()

int main(){
	vector<int> vx, vy;
	while (1){
		vx.clear();
		vy.clear();
		REP(i, 8){
			string str;
			cin >> str;
			if (cin.eof()){
				return 0;
			}	
			REP(j, 8){
				if (str[j] == '1'){
					vx.pb(i);
					vy.pb(j);
				}
			}
		}
		char ans = 'G';
		if (vx[0] == vx[1] && vy[0] == vy[2]) ans = 'A';
		if (vy[0] == vy[1] && vy[0] == vy[2] && vy[0] == vy[3]) ans = 'B';
		if (vx[0] == vx[1] && vx[0] == vx[2] && vx[0] == vx[3]) ans = 'C';
		if (vx[1] == vx[2] && vy[1] == vy[3] && vy[0] == vy[2]) ans = 'D';
		if (vx[0] == vx[1] && vx[2] == vx[3] && vy[1] == vy[2] && vy[0] + 2 == vy[3]) ans = 'E';
		if (vx[1] == vx[2] && vy[0] == vy[1] && vy[2] == vy[3]) ans = 'F';
		
		cout << ans << endl;
		
	}
}