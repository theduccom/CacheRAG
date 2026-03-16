#include <cstdio>

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a){
        if(b) printf("Open\n");
        else printf("Close\n");
    }
    else if(b) printf("Close\n");
    else if(c) printf("Open\n");
    else printf("Close\n");

    return 0;
}