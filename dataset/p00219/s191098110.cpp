#include<cstdio>
int main(){
    int n;
    for(;;){
        scanf("%d",&n);
        if(n==0) break;
        int a[10];
        for(int i=0;i<10;i++){
            a[i]=0;
        }
        for(int i=0;i<n;i++){
            int ins;
            scanf("%d",&ins);
            a[ins]++;
        }
        for(int i=0;i<10;i++){
            if(a[i]>0){
                for(int j=0;j<a[i];j++){
                    printf("*");
                }
                printf("\n");
            }else printf("-\n");
        }
    }
}