#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    for(;;){
        scanf("%d",&n);
        if(n==-1) break;
        int ret=1150;
        if(n>10) ret+=125*min(n-10,10);
        if(n>20) ret+=140*min(n-20,10);
        if(n>30) ret+=160*(n-30);
        printf("%d\n",4280-ret);
    }
}