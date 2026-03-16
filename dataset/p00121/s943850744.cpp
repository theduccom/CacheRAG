#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <iostream>
#include <string.h>
#include <map>

//ios::sync_with_stdio(false);

using namespace std;

map<string, int> spath;

string swap(string s, int i, int j){
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}

void bfs(){
    vector<vector<int>> d = {
        {1, 4},
        {0, 2, 5},
        {1, 3, 6},
        {2, 7},
        {0, 5},
        {1, 4, 6},
        {2, 5, 7},
        {3, 6}
    };
    
    string start = "01234567";
    queue<string> q;
    
    spath[start] = 0;
    q.push(start);
    
    while(!q.empty()){
        string s = q.front(); q.pop();
        
        int pos = s.find("0");
        for(int i=0; i<d[pos].size(); i++){
            string t = swap(s, pos, d[pos][i]);
            if(spath.find(t) == spath.end()){
                spath[t] = spath[s] + 1;
                q.push(t);
            }
        }
    }
}

int main(){
    bfs();
    
    string s = "01234567";
    
    while(cin >> s[0]){
        for(int i=1; i<8; i++)
            cin >> s[i];
        cout << spath[s] << endl;
    }
    
	return 0;
}