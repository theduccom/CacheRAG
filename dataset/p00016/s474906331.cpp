#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    int a,b;
    double x = 0, y = 0, arg = 0;
    while(1) {
    	scanf("%d,%d",&a,&b);
    	if(a == 0 && b == 0) break;
    	x += a * sin(arg * (M_PI / 180.0));
    	y += a * cos(arg * (M_PI / 180.0));
    	arg += b;
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}