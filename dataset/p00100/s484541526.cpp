#include<cstdio>
using namespace std;
int main(){
    int n;

    while(scanf("%d",&n),n){

        long long int mem[4500][3] = {{0}};
        long long int a,x,y;
        long long int cnt = 0;

        for(long long int i = 0;i < n; i++){
            scanf("%lld%lld%lld",&a,&x,&y);
            for(long long int j = 0;j < i; j++){
                if(mem[j][1] != a){
                   cnt++;
                }
                else {
                    mem[j][0] += x*y;
                    break;
                }
            }
            if(cnt == i){
                mem[i][0] += x*y;
                mem[i][1] = a;
                cnt = 0;
            }
        }

        bool flg = 0;
        for(int i = 0;i < n; i++){
            if(mem[i][0] >= 1000000){
                printf("%lld\n",mem[i][1]);
                flg = 1;
            }
        }
        if(flg == 0)printf("NA\n");
    }
    return 0;
}