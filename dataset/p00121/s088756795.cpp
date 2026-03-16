#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(8);
    for(int i=0; i< 8; i++) v[i] = i;
    map<int, int> m;

    queue<pair<vector<int>, int> > que;
    que.push(make_pair(v, 0));
    while(que.size()){
        vector<int> v = que.front().first; int count = que.front().second; que.pop();
        int p = 0;
        for(int i=0; i< 8; i++) p = p*10+v[i];
        if(m[p] == 0 || count+1 < m[p]) m[p] = count+1;
        else continue;

        for(int i=0; i < 8; i++){
            if(v[i] == 0){
                if(i != 0 && i != 4){
                    swap(v[i], v[i-1]);
                    que.push(make_pair(v, count+1));
                    swap(v[i], v[i-1]);
                }
                if(i != 3 && i != 7){
                    swap(v[i], v[i+1]);
                    que.push(make_pair(v, count+1));
                    swap(v[i], v[i+1]);
                }
                if(3 < i){
                    swap(v[i], v[i-4]);
                    que.push(make_pair(v, count+1));
                    swap(v[i], v[i-4]);
                }
                else {
                    swap(v[i], v[i+4]);
                    que.push(make_pair(v, count+1));
                    swap(v[i], v[i+4]);
                }
            }
        }
    }
    int n;
    while(cin >> n){
        for(int i=1; i< 8; i++){
            int t; cin >> t;
            n = n*10+t;
        }
        cout << m[n]-1 << endl;
    }
}