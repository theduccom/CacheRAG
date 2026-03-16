#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <ctime>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;


int main()
{
    map<string,set<int> > m;
    string s;
    while(cin>>s)
    {
        int p;
        cin>>p;
        m[s].insert(p);
    }
    for(map<string,set<int> >::iterator it = m.begin();it!=m.end();it++)
    {
        cout<<(it->first)<<endl;
        bool first = true;
        for(set<int>::iterator it2 = it->second.begin();it2 != it->second.end();it2++)
        {
            cout<<(first?"":" ")<<(*it2);
            first=false;
        }
        cout<<endl;
    }
}