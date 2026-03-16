#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <bitset>
#include <climits>

using namespace std;
typedef long long ll;

int main(){

    int N, M, st, A, B, C, D, X1, X2, Y1, Y2;
    int K[20][20];
    for(int i=0;i<20;++i){
        for(int j=0;j<20;++j){
            K[i][j] = INT_MAX / 2;
        }
    }
    scanf("%d%d", &N, &M);
    {

        for(int i=0;i<M;++i){
            scanf("%d,%d,%d,%d", &A, &B, &C, &D);
            K[A-1][B-1]=C;
            K[B-1][A-1]=D;
        }
        scanf("%d,%d,%d,%d", &X1, &X2, &Y1, &Y2);
        for(int k=0;k<N;++k){
            for(int i=0;i<N;++i){
                for(int j=0;j<N;++j){
                    K[i][j] = min(K[i][j], K[i][k] + K[k][j]);
                }
            }
        }
    }
    cout << (Y1-Y2-K[X1-1][X2-1]-K[X2-1][X1-1]) << endl;
    return 0;
}