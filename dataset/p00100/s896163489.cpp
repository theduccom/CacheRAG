#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back 
#define fr first
#define sc second
#define Rep(i,n) for(int i=0;i<(n);i++)
#define All(v) v.begin(),v.end()
#define Uniq(v) v.erase(unique(All(v)),v.end())
typedef pair<int, int> Pii; 
typedef pair<int, Pii> Pip;
typedef pair<string, int> Psi;
typedef vector<int> Vi;
const int INF = (1<<30);
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};

int main()
{
  int n;
  while( cin >> n, n ) {
    ll a, b, c;
    map<ll, ll> m;
    vector<ll> v;
    bool flag = false;
    Rep(i, n) {
      cin >> a >> b >> c;
      if( m.find( a ) == m.end() ) {
	v.pb( a );
	m[a] = 0;
      }
      m[a] += b * c;
    }
    
    Rep(i, v.size()) {
      if( m[v[i]] >= 1000000 ) {
	cout << v[i] << endl;
	flag = true;
      }
    }

    if( !flag ) cout << "NA" << endl;
  }
}