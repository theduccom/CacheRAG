#include <stdio.h>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int main(){
    int n,m,a[N],ans;
    while(true){
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)return 0;
        ans=0;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++)if((i+1)%m!=0)ans+=a[i];
        printf("%d\n",ans);
    }
}
