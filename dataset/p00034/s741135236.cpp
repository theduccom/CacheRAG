#include<cstdio>
using namespace std;
int main(){
    int l[11]={0};
    char unk;
    while(scanf("%d",&l[1])!=EOF){
        scanf(" %c",&unk);
        for(int i = 2;i <= 10; i++)scanf("%d %c",&l[i],&unk);
        double v1,v2;
        scanf("%lf,%lf",&v1,&v2);

        double sum=0,a;
        for(int i = 1;i <= 10; i++)sum += (double)l[i];

        a = sum/(v1+v2)*v1;
        sum = 0;
        bool f = 0;
        for(int i = 1;i <= 10; i++){
            sum += l[i];
            if(a <= sum){
                printf("%d\n",i);
                f = 1;
            }
            if(f == 1)break;
        }
    }
    return 0;
}