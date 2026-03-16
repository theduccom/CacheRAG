#include <iostream>
#include <vector>
using namespace std;

typedef struct
{
    long long score;
    bool is_first;
}WORKER;

int main()
{
    int n;
    while(1)
    {
        WORKER worker[4000];
        vector<int> id_list;
        int cnt = 0;
        for(int i=0; i<4000; i++)
        {
            worker[i].score = 0;
            worker[i].is_first = true;
        }
        cin >> n;
        if(n == 0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            int id;
            long long p;
            long long q;
            cin >> id >> p >> q;
            worker[id].score += p * q;
            if(worker[id].score >= 1000000 && worker[id].is_first)
            {
                id_list.push_back(id);
                worker[id].is_first = false;
            }
        }
        for(int i=0; i<id_list.size(); i++)
        {
            cout << id_list[i] << endl;
        }
        if(id_list.size() == 0)
        {
            cout << "NA" << endl;
        }
    }
    return 0;
}