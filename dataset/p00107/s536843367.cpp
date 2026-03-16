#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cstring>
#include<map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

int main()
{
    int v, w, h;
    while(cin >> v >> w >> h && v)
    {
        int r = v * v + w * w;
        r = min(r, w*w + h*h);
        r = min(r, h*h + v*v);

        int n, hole; cin >> n;
        REP(n)
        {
            cin >> hole;
            if(r < hole * hole * 4) cout <<"OK" << endl;
            else cout << "NA" << endl;
        }

    }

    return 0;
}