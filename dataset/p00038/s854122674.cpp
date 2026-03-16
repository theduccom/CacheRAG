#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

int main() {
	int a[5];
	while(~scanf("%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4)){
		sort(a,a+5);
		if(a[0]==a[3]||a[1]==a[4]){
			cout<<"four card"<<endl;
		}else if(a[0]==a[2]&&a[3]==a[4]||a[0]==a[1]&&a[2]==a[4]){
			cout<<"full house"<<endl;
		}else if((a[0]+1==a[1]||a[0]==1&&a[4]==13)&&a[1]+1==a[2]&&a[2]+1==a[3]&&a[3]+1==a[4]){
			cout<<"straight"<<endl;
		}else if(a[0]==a[2]||a[1]==a[3]||a[2]==a[4]){
			cout<<"three card"<<endl;
		}else if(a[0]==a[1]&&(a[2]==a[3]||a[3]==a[4])||a[1]==a[2]&&a[3]==a[4]){
			cout<<"two pair"<<endl;
		}else if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3]||a[3]==a[4]){
			cout<<"one pair"<<endl;
		}else{
			cout<<"null"<<endl;
		}
	}
	return 0;
}