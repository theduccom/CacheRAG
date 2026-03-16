#include <bits/stdc++.h>

#define int long long int
#define main signed main()
#define bye return 0
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define each(p, v) for (auto p = (v).begin(); p != (v).end(); p++)
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed << setprecision(n)
#define dump(x) cerr << "(L" << __LINE__ << ") " << #x << " = " << (x) << endl
#define clr(x, a) memset(x, a, sizeof(x))

#define sum(v) accumulate(all(v), 0)
#define stlice(from, to) substr(from, (to) - (from) + 1)
#define odd(n) ((n) % 2)
#define even(n) (!odd(n))

#define INF 1000000000
#define MOD 1000000007

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>

using namespace std;

main {
  bool a[] ={true,false,false};
  char p,x,q;
  while(cin>>p>>x>>q) {
    swap(a[p-'A'],a[q-'A']);
  }
  cout<<(a[0]?'A':a[1]?'B':'C')<<endl;
  bye;
}