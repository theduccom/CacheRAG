#include<cstdio>
using namespace std;
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n == -1)break;
        int ans = 0;
        ans = 1150;
        if(n <= 10){printf("%d\n",4280-ans);continue;}
        n = n - 10;
        if(n <= 10){
            ans += 125*n;
            printf("%d\n",4280-ans);
            continue;
        }
        ans += 1250;
        n = n - 10;
        if(n <= 10){
            ans += 140*n;
            printf("%d\n",4280-ans);
            continue;
        }
        ans += 1400;
        n = n - 10;
        //printf("n = %d\n",n);
        ans += n*160;
        printf("%d\n",4280 - ans);
    }
    return 0;
}