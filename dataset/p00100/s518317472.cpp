#include<bits/stdc++.h>
using namespace std;
long long sum[4000][10000];
bool used[4000][5000];
int main(){
    int a[10000];
    long long int n, b, c;
    for(int m=0; ; m++){
        scanf("%lld", &n);
        if(n==0)break;
        bool na = true;
        for(int i = 0; i < n; i++){
            scanf("%d%lld%lld", &a[i], &b, &c);
            sum[m][a[i]] += b*c;
            /*if(b*c>=1000000){
                na = false;
                printf("%lld\n", a);
            }*/
        }
        for(int i = 0; i < n; i++){
            if(used[m][a[i]]==false&&sum[m][a[i]] >= 1000000){
                na = false;
              used[m][a[i]]=true;
                printf("%d\n", a[i]);
            }
        }
        
        if(na) puts("NA");
    }
}
