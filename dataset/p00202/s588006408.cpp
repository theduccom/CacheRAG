#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)
#define CLR(a)      memset((a),0,sizeof(a))
#define MCLR(a)     memset((a),-1,sizeof(a))
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double EPS = 1e-9;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

bool dp[1000000];

const int MAX_N = 1000000;

vector<int> prime;
bool is_prime[MAX_N+1];

// n以下の素数を生成する
void create_prime(int n){
	// 初期化
	is_prime[0] = is_prime[1] = false;
	for(int i=2;i<=n;i++){
		is_prime[i] = true;
	}
	
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime.push_back(i);
			for(int j=2*i;j<=n;j+=i){
				is_prime[j] = false;
			}
		}
	}
}

int main(){
	int n,x;
	create_prime(MAX_N);
	while(true){
		cin >> n >> x;
		if(n==0 && x==0) break;
		REP(i,x+1){
			dp[i] = false;
		}
		VI data;
		int buf;
		REP(i, n){
			cin >> buf;
			data.PB(buf);
		}

		dp[0] = true;
		REP(i,x){
			if(dp[i]){
				REP(j, n){
					if(i+data[j] <= x) dp[i+data[j]] = true;
				}
			}
		}

		int ans = 0;
		REP(i, prime.size()){
			if(x < prime[i]) break;
			if(dp[prime[i]]){
				ans = prime[i];
			}
		}

		if(ans != 0){
			cout << ans << endl;
		}else{
			cout << "NA" << endl;
		}
	}
}