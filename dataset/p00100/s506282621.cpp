#include <queue>
#include <cstdlib>
#include <iomanip>
#include <utility>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

vector<pair<int,int> > v;

int vsearch(int id)
{
    for(int i = 0;i<v.size();i++)
    {
        if(v[i].first==id)
            return i;
    }
    return -1;
}

int main() {
    
    int const price = 1000000;
    int n;
    while(cin >> n && n!=0)
    {
        int e[n],p[n],q[n];
        for(int i = 0; i<n;i++)
        {
            cin >> e[i] >> p[i] >> q[i];
        }
        
        for(int i = 0; i< n; i++)
        {
            int id = vsearch(e[i]);
            if(id < 0)
                v.push_back({e[i],p[i]*q[i]});
            else
                v[id].second += p[i]*q[i];
        }
        bool ch = true;
        for(int i = 0;i<v.size();i++)
        {
            if(v[i].second >= price)
            {
                cout << v[i].first << endl;
                ch = false;
            }
        }
        if(ch) cout << "NA" << endl;
        vector<pair<int,int> >().swap(v);
    }
    
    return 0;
}