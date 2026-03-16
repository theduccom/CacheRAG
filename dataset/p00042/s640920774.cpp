#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int W,N;
    for(int ii=1;;ii++){
        scanf("%d",&W);
        if(W==0) break;
        int values[W+1];
        for(int i=0;i<=W;i++){
            values[i]=0;
        }
        scanf("%d",&N);
        int v,n;
        for(int i=0;i<N;i++){
            scanf("%d,%d",&v,&n);
            for(int j=W;j>=n;j--){
                values[j]=max(values[j],values[j-n]+v);
            }
        }
        int maxw,maxv=-1;
        for(int i=0;i<=W;i++){
            if(values[i]>maxv){
                maxw=i;
                maxv=values[i];
            }
        }
        printf("Case %d:\n%d\n%d\n",ii,maxv,maxw);
    }
}