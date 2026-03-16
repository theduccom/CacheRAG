#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    while(cin >> N >> M, N != 0){
        vector<int> p(N);
        for(int i = 0; i < N; i++) cin >> p[i];
        sort(p.rbegin(), p.rend());

        int ans = 0;
        for(int i = 0; i < N; i++){
            if((i+1) % M) ans += p[i]; 
        }
        cout << ans << endl;
    }
}
