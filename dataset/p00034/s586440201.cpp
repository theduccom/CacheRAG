#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    int l[10],v1,v2;
    while(scanf("%d",&l[0])!=EOF){
        for(int i=1;i<10;i++)scanf(",%d",&l[i]);
        scanf(",%d,%d",&v1,&v2);
        int sum=0;
        for(int i=0;i<10;i++)sum+=l[i];
        double x=(double)sum/(v1+v2);
        x*=v1;
        int ite=0;
        while(true){
            x-=l[ite];
            if(x<=0){
                cout<<ite+1<<endl;
                break;
            }
            ite++;
        }
    }
    return 0;
}