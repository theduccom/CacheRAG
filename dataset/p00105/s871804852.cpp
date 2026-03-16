#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cstring>
#include<map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

#define MAX 1000

typedef pair<string, vector<int> > pp;

int main()
{
    string s;
    int n;
    vector<pp> ind;
    vector<int> emp;

    while(cin >> s >> n)
    {
        bool found = false;
        REP(ind.size() )if(ind[i].first == s){ ind[i].second.push_back(n); found = true; break; }
        if(found)continue;

        ind.push_back(pp(s,emp));
        ind[ind.size() - 1].second.push_back(n);
    }
    sort(ind.begin(), ind.end());


    REP(ind.size())
    {
        sort(ind[i].second.begin(), ind[i].second.end());
        cout << ind[i].first << endl;
        rep(j, ind[i].second.size())
        {
            cout << ind[i].second[j] ;
            if(j == ind[i].second.size() - 1) break;
            cout << " " ;
        }

        cout << endl ;
    }
    return 0;
}