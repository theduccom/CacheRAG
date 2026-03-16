#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
	int n;
	while(cin>>n){
		if(n==-1)break;
		//int a,b,c,d;
		int sum =4280-1150;
		if(n<=10){
			cout <<sum<<endl;
			continue;
		}else if(n>10&&n<=20){
			//sum -=10*125;
			sum -=(n-10)*125;
			cout <<sum<<endl;
			continue;
		}else if(n>20&&n <=30){
			sum -=10*125;
			//sum -=10*140;
			sum -=(n-20)*140;
			cout <<sum<<endl;
			continue;
		}else if(n>30){
			sum -=10*125;
			sum -=10*140;
			sum -=(n-30)*160;
			cout <<sum<<endl;
			continue;
		}
	}
	return 0;
}