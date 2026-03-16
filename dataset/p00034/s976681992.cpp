#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int l[10];
    int v1,v2;
    int l_total;
    double sec_tmp;
    int sec;
    int i;
    
    while(true){
        l_total=0;
        for(i=0;i<10;i++){
            if(scanf("%d,",&l[i])==EOF)return 0;
            l_total+=l[i];
        }
        scanf("%d,%d",&v1,&v2);
        sec_tmp=(double)(v1*l_total)/(v1+v2);
        i=0;
        while(sec_tmp>0){
            sec_tmp-=(double)l[i];
            i++;
        }
        cout<<i<<endl;
    }
}