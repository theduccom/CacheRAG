#include<cstdio>
int main(){
    double d;
    while(scanf("%lf",&d)!=-1){
        double sum=d;
        for(int i=2;i<=10;i++){
            if(i%2==0) d*=2;
            else d/=3;
            sum+=d;
        }
        printf("%lf\n",sum);
    }
}