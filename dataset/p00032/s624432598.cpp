#include<cstdio>
using namespace std;
int main(){
    int a[3];
    int c=0,h=0;
    while(~scanf("%d,%d,%d",&a[0],&a[1],&a[2])){
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) c++;
        if(a[0]==a[1]) h++;
    }
    printf("%d\n%d\n",c,h);
}