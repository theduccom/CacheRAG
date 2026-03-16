#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
const int upto=50000;
int main(){
    vector<bool> prs(upto+1,true);
    prs[0]=prs[1]=false;
    for(int i=2;i<=sqrt(upto);i++){
        if(prs[i]){
            for(int j=i*i;j<=upto;j+=i)prs[j]=false;
        }
    }
    for(;;){
        int n;
        scanf("%d",&n);
        if(n==0)break;
        int ans=0;
        for(int i=2;i<=n/2;i++){
            if(prs[i]&&prs[n-i])ans++;
        }
        printf("%d\n",ans);
    }
}