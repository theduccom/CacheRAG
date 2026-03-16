#include <iostream>
#include <vector>
#include <cstring>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;


typedef long long ll;
typedef pair<int, bool> IB;

struct P{
	int id;
	int tanka;
	int kosuu;
};
ll shain[4001];
bool used[4001];
bool more[4001];
int main()
{
	int n;

	while (cin >> n && n ){
		vector<P> data (n );
		rep (i, n ){
			cin >> data[i].id >> data[i].tanka >> data[i].kosuu;
		} // end rep
		memset (shain, 0LL, sizeof (shain ) );
		memset (used, false, sizeof (used ) );
		memset (more, false, sizeof (more ) );
		rep (i, n ){
			ll total = (ll)data[i].tanka*(ll)data[i].kosuu;
			shain[data[i].id] += total;
		} // end if
		for (int i = 1; i <= 4000; i++ ){
			if (shain[i] >= 1000000LL ){
				more[i] = true;
			} // end if
		} // end for
		bool found = false;
		rep (i, n ){
			if (more[data[i].id] && !used[data[i].id] ){
				cout << data[i].id << endl;
				used[data[i].id] = true;
				if (!found )
					found = true;
			} // end if
		} // end rep
		if (!found ){
			cout << "NA" << endl;
		} // end if
	} // end loop
		
	return 0;
}