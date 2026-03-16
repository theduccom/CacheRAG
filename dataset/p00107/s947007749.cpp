#include<cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    while(1){
        int a[3];
        scanf("%d %d %d",a,a+1,a+2);
        if (a[0]==0&&a[1]==0&&a[2]==0) return 0;
        sort(a, a+3);
        short l=sqrt(a[0]*a[0]+a[1]*a[1]);
        int n;
        scanf("%d",&n);
        for (int i=0; i<n; i++) {
            int r;
            scanf("%d",&r);
            if (2*r<=l) printf("NA\n");
            else printf("OK\n");
        }
    }
}