#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

const int INF = 10000000;
using namespace std;
typedef long long  ll;
const int MAX = 10000;

/** Problem0216 : Cutting Down Water Bills **/
int main()
{
	int w;
	
	while (cin>>w, w>=0) {
		int sum=1150;
		if (w>10) {
			w-=10;
		} else {
			w=0;
		}
		
		if (w>0) {
			if (10<w) {
				w-=10;
				sum+=1250;
			} else {
				sum+=w*125;
				w=0;
			}
		}
		
		if (w>0) {
			if (10<w) {
				w-=10;
				sum+=1400;
			} else {
				sum+=w*140;
				w=0;
			}
		}
		
		if (w>0)
			sum+=w*160;
			
		cout << 4280 - sum << endl;
	}
	return 0;
}