#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
int ps[1000];
int main(){
    int n,m;
    for(;;){
        scanf("%d%d",&n,&m);
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++){
            scanf("%d",&ps[i]);
        }
        sort(ps,ps+n,greater<int>());
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%m!=m-1) sum+=ps[i];
        }
        printf("%d\n",sum);
    }
}