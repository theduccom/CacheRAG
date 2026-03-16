#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

typedef long long ll;

int Z(int y, int x){
    return y * 4 + x;
}

string swp(string s, int a, int b){
    string ret = s;
    swap(ret[a], ret[b]);
    return ret;
}

int main(){
    map<string, int> MAP;
    // 01234567?????????????????¨????????????????????§
    string s = "01234567";
    queue<string> que;
    que.push(s);
    MAP[s] = 0;
    int vy[4] = {-1, 0, 1, 0};
    int vx[4] = {0, 1, 0, -1};
    while(!que.empty()){
        string nows = que.front();que.pop();
        int z = nows.find('0');
        int nowx = z % 4;
        int nowy = z / 4;
        FOR(i,0,4){
            int nexty = nowy + vy[i];
            int nextx = nowx + vx[i];
            if(nexty < 0 || nexty >= 2 || nextx < 0 || nextx >= 4) continue;
            string nexts = swp(nows, z, Z(nexty, nextx));
            if(MAP.count(nexts)!=0) continue;
            MAP[nexts] = MAP[nows] + 1;
            que.push(nexts);
        }
    }
    string line;
    stringstream ss;
    while(getline(cin, line)){
        ss << line;
        string t = "";
        FOR(i,0,8){
            char c;
            ss >> c;
            t += c;
        }
        cout << MAP[t] << endl;
    }
}