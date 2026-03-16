#include<cstdio>
#include<cstring>
#include<algorithm>
#include<deque>
using namespace std;
typedef pair<int,int> P;

int W,N,v[1000],w[1000];
int I;

P dp[1001][1001];
bool done[1001][1001];
P solve(int i,int r){
    if(done[i][r]) return dp[i][r];
    P result;
    if(i==N) result=P(0,r);
    else {
        if(r-w[i]>=0){
            P p=solve(i+1,r-w[i]);
            p.first+=v[i];
            result=max(p,solve(i+1,r));
        }else{
            result=solve(i+1,r);
        }
    }
    done[i][r]=true;
    return dp[i][r]=result;
}

int main(){
    while(I++,scanf("%d%d",&W,&N),W){
        for(int i=0;i<N;i++)scanf("%d,%d",v+i,w+i);
        memset(done,0,sizeof(done));
        P p=solve(0,W);
        printf("Case %d:\n%d\n%d\n",I,p.first,W-p.second);
    }
}