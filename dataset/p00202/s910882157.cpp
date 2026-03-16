#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    const int MAX=1000000;
    vector<bool> pri(MAX+1,true);
    pri[0]=pri[1]=false;
    for(int i=2;i<=sqrt(MAX);i++){
        if(pri[i]){
            for(int j=i*i;j<=MAX;j+=i){
                pri[j]=false;
            }
        }
    }
    int N,X;
    for(;;){
        scanf("%d%d",&N,&X);
        if(N==0&&X==0) break;
        vector<bool> has(X+1,false);
        has[0]=true;
        int in;
        for(int i=0;i<N;i++){
            scanf("%d",&in);
            for(int j=0;j<=X;j++){
                if(has[j]&&(j+in<=X)) has[j+in]=true;
            }
        }
        int ret=-1;
        for(int i=X;i>=0;i--){
            if(pri[i]&&has[i]){
                ret=i;
                break;
            }
        }
        if(ret==-1) printf("NA\n");
        else printf("%d\n",ret);
    }
}