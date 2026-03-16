#include <stdio.h>
int main(){
    int n,now=1,a[10000],ans;
    bool prime[60000],f;
    a[0]=2;
    for(int i=3;i<60000;i+=2){
        prime[i]=true;
    }
    for(int i=3;i<=60000;i+=2){
        if(prime[i]){
            a[now]=i;
            now++;
            if((long long)i*i<60000){
            for(int j=i*i;j<60000;j+=i){
                prime[j]=false;
            }
            }
        }
    }
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        ans=now=0;
        if(n%2==1){
            f=true;
            n-=2;
            for(int i=0;a[i]<=n&&f;i++){
                if(a[i]==n){printf("1\n");
                    f=false;
                }
            }
            if(f)printf("0\n");
        }
        else {
            while(a[now]<=n)now++;
            now--;
            for(int i=0;i<=now;i++){
                while(a[i]+a[now]>n)now--;
                if(i>now)continue;
                for(int j=i;a[j]+a[now]<=n&&j<=now;j++){
                    if(a[j]+a[now]==n){
                        ans++;
                        now--;
                        break;
                    }
                }
            }
            printf("%d\n",ans);
        }
    }
}