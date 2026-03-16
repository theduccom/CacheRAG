#include <stdio.h>
int main(){
    double a[10],ans;
    while(scanf("%lf",&a[0])!=EOF){
        ans=a[0];
        for(int i=1;i<10;i++){
            if(i%2==1){
                a[i]=a[i-1]*2;
            }
            else{
                a[i]=a[i-1]/3;
            }
            ans+=a[i];
        }
        printf("%lf\n",ans);
    }
}