#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n;
    long long int ids[4001];
    int id;
    long long price, amount;
    bool exist;
    bool used[4001];
    vector<int> rank;
    while(cin >> n && n)
    {
        exist=false;
        for(int i=1;i<4001;++i)
        {
            ids[i] = 0;
            used[i] = false;
        }
        rank.clear();
        for(int i=0;i<n;++i)
        {
            cin >> id >> price >> amount;
            if(!used[id])
            {
                rank.push_back(id);
                used[id] = true;
            }
            ids[id] += price * amount;
        }
        for(int i=0;i<rank.size();++i)
        {
            if(ids[rank[i]] >= 1000000)
            {
                exist = true;
                cout << rank[i] << endl;
            }
        }
        if(!exist) cout << "NA" << endl;
    }
}