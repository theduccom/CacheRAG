#include <map>
#include <queue>
#include <vector>
#include <utility>
#include <iostream>
 
using namespace std;
 
const int dir[4] = { -4, -1, 1, 4 };
 
const vector<int> goal = { 0, 1, 2, 3, 4, 5, 6, 7 };
 
map<vector<int>, int> d;
 
void bfs(vector<int> puzzle)
{
    queue<pair<vector<int>, int> > que; que.push(make_pair(puzzle, 1));
     
    d[puzzle] = 1;
     
    while(!que.empty())
    {
        vector<int> v = que.front().first; 
         
        int dist = que.front().second; que.pop();
         
        int zero = -1;
         
        for(int i = 0; i < 8; i++)
        {
            if(v[i] == 0)
            {
                zero = i;
            }
        }
         
        for(int i = 0; i < 4; i++)
        {
            if(0 <= zero + dir[i] && zero + dir[i] < 8 && !(i == 1 && zero == 4) && !(i == 2 && zero == 3))
            {
                vector<int> v2 = v;
                 
                swap(v2[zero], v2[zero + dir[i]]);
 
                if(d[v2] == 0)
                {
                    d[v2] = dist + 1;
                     
                    que.push(make_pair(v2, dist + 1));
                }
            }
        }
    }
}
 
int main()
{
   vector<int> v(8);
    
   bfs(goal);
    
   while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5] >> v[6] >> v[7])
   {
       cout << d[v] - 1 << endl;
   }
    
   return 0;
}