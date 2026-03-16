#include<cstdio>
using namespace std;
int main(){
    bool check[1000000]={0};
    int flg = 1;
    check[2] = 1;
    for(int i = 3;i <= 1000000; i += 2){
        flg = 1;
        for(int j = 2;j*j <= i; j++){
            if(i%j == 0){
                flg = 0;
                break;
            }
        }
        if(flg == 1){
            check[i] = 1;
        }
    }
    int n;
    while(scanf("%d",&n),n){
        int ans = 0;
        int cnt = 0;
        for(int i = 2;;i++){
            if(check[i] == 1){
                ans += i;
                cnt++;
            }
            if(cnt == n)break;
        }
        printf("%d\n",ans);
    }
    return 0;
}