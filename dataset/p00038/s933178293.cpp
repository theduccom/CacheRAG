#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
typedef pair<int,int> pii;

int main() {
	int c[5];
	char k;
	while(cin >> c[0] >> k >> c[1] >> k >> c[2] >> k >> c[3] >> k >> c[4]) {
		int cnt[13] = {};
		int twoes = 0;
		rep(i,5) {
			cnt[c[i]-1]++;
		}
		rep(i,13) {
			if(cnt[i] == 4) {
				cout << "four card" << endl;
				goto END;
			}
		}
		rep(i,13) {
			rep(j,13) {
				if(cnt[i]==3 && cnt[j]==2) {
					cout << "full house" << endl;
					goto END;
				}
			}
		}
		rep(i,10) {
			bool ok = true;
			rep(j,5) {
				int n = (i+j)%13;
				if(cnt[n] != 1) {
					ok = false;
					break;
				}
			}
			if(ok) {
				cout << "straight" << endl;
				goto END;
			}
		}
		rep(i,13) {
			if(cnt[i] == 3) {
				cout << "three card" << endl;
				goto END;
			}
		}
		rep(i,13) {
			if(cnt[i] == 2) twoes++;
		}
		if(twoes==2) {
			cout << "two pair" << endl;
		} else if(twoes==1) {
			cout << "one pair" << endl;
		}else {
			cout << "null" << endl;
		}
END:;
	}
	return 0;
}