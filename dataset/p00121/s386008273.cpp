#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    string start = "01234567";
    map<string, int> d;
    queue<string> Q;
    int dx[] = {1, -1, 4, -4};
    Q.push(start);
    d[start] = 0;
    while(!Q.empty()) {
        string s = Q.front(); Q.pop();
        int x = s.find("0");
        rep(i, 4) {
            int nz = x+dx[i];
            if(nz>=0 && nz < 8 && !(x==3&&nz==4) && !(x==4&&nz==3) ){
                string tmp = s;
                swap(tmp[x], tmp[nz]);
                if(d.count(tmp) == 0) {
                    Q.push(tmp);
                    d[tmp] = d[s] + 1;
                }
            }
        }
    }

    while(true) {
        string input = "";
        char t;
        rep(i, 8) {
            if(cin >> t) input.push_back(t);
            else return 0;
        }
        cout << d[input] << endl;
    }
}