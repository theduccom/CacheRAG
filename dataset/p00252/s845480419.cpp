#include<cstdio>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b==2 || c == 1)puts("Open");
    else puts("Close");
    return 0;
}