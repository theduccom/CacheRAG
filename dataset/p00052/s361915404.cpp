#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n;
    for(;;){
        scanf("%d\n",&n);
        if(n==0) break;
        int n2=0,n5=0;
        for(long long i=2;i<=2000000000;i*=2){
            n2+=n/i;
        }
        for(long long i=5;i<=2000000000;i*=5){
            n5+=n/i;
        }
        printf("%d\n",min(n2,n5));
    }
}