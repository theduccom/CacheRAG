#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 20000000
map<string,vector<int> > book;
int main()
{
        string s;
        int page;
        while(cin >> s >> page)
        {
                book[s].pb(page);
        }
        for(map<string,vector<int> >::iterator it=book.begin();it!=book.end();it++)
        {
                sort(it->second.begin(),it->second.end());
                cout << it->first << endl;
                for(int i=0;i<(it->second.size());i++)
                {
                        cout << it->second[i];
                        if(i==((it->second.size())-1))
                        {
                                cout << endl;
                        }
                        else
                        {
                                cout << ' ';
                        }
                }
        }
        return 0;
}