#include <bits/stdc++.h>

using namespace std;

int main(){
        map<vector<int>, int>MVII;
        vector<int>D(8);
        for(int i = 0;i < 8; i++){
                D[i]=i;
        }

        queue<vector<int>>que;
        que.push(D);
        while(que.size()){
                vector<int> now = que.front(); que.pop();
                int zero;
                for(int i = 0; i < 8; i++) {
                        if(now[i] == 0) zero = i;
                }
                if(zero >=4) {
                        auto E = now;
                        swap(E[zero], E[zero - 4]);
                        if(MVII[E]==0){
                                MVII[E]=MVII[now]+1;
                                que.push(E);
                        }
                } else{
                        auto E = now;
                        swap(E[zero], E[zero + 4]);
                        if(MVII[E]==0){
                                MVII[E]=MVII[now]+1;
                                que.push(E);
                        }
                }
                if(zero != 0 && zero != 4) {
                        auto E = now;
                        swap(E[zero], E[zero -1]);
                        if(MVII[E]==0){
                                MVII[E]=MVII[now]+1;
                                que.push(E);
                        }
                }
                if(zero != 3 && zero != 7) {
                        auto E = now;
                        swap(E[zero], E[zero +1]);
                        if(MVII[E]==0){
                                MVII[E]=MVII[now]+1;
                                que.push(E);
                        }
                }
        }
        for(int i = 0;i < 8; i++){
                D[i]=i;
        }
        MVII[D] = 0;
        while(cin>>D[0]){
                for(int i = 1;i<8;i++){
                        cin>>D[i];
                }
                cout<<MVII[D]<<endl;
        }

}