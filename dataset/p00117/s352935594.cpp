#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
#include<set>
#include<stack>
#include<functional>
#include<queue>
using namespace std;

int main(){
    int N,M,A,B,C1,C2,d[20][20],S,G,Mny,V;
    fill_n((int*)d,20*20,INT_MAX/2);
    cin>>N>>M;
    for(int i=0;i<M;i++){
        scanf("%d,%d,%d,%d",&A,&B,&C1,&C2); A--; B--;
        d[A][B] = C1; d[B][A] = C2;
    }
    scanf("%d,%d,%d,%d",&S,&G,&Mny,&V); S--; G--;
    for(int k=0;k<N;k++)for(int i=0;i<N;i++)for(int j=0;j<N;j++)
        d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
    printf("%d\n",Mny-V-d[S][G]-d[G][S]);
    return 0;
}