#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

typedef pair<int, int> pp;

int main()
{
    int n, p, d1, d2;
    while(cin >> n && n)
    {
        vector<pp> ps;
        REP(n){cin >> p >>  d1 >> d2; ps.push_back(pp(d1+d2, p));}

        sort(all(ps), greater<pp>() );

        cout << ps[0].second << " " << ps[0].first << endl;
        
    }
    return 0;
}