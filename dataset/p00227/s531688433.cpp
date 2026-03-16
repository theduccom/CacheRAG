#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <cctype>
#include <cstring>
#define rep(i, m, n) for (int i = m; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define ll long long
#define ull unsigned long long
#define push(a) push_back(a)
#define pop(a) pop_back(a)
#define debug(x) cout << #x << ": " << x << endl
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy[] = {0, 0, 1, -1, 0};
int dx[] = {1, -1, 0, 0, 0};

ll n,m;
ll p[100005]={};
ll ans=0;

int main()
{
    while(1){
        cin >> n >> m;
        if(n==0&&m==0)return 0;
    
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        sort(p,p+n);
        reverse(p,p+n);

        for(int i=0; i<n; i++){
            if(i%m!=m-1)ans+=p[i];
        }
        cout<<ans<<endl;
        ans=0;
    }
}