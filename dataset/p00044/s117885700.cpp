#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int NUM=60000,UPTO=sqrt(NUM);
int main(){
    bool pris[NUM];
    fill(pris,pris+NUM,true);
    pris[0]=pris[1]=false;
    for(int i=2;i<=UPTO;i++){
        if(pris[i]){
            for(int j=i*i;j<NUM;j+=i){
                pris[j]=false;
            }
        }
    }
    int n;
    while(scanf("%d",&n)!=-1){
        int ll=-1,l=-1;
        for(int i=2;i<NUM;i++){
            if(pris[i]){
                if(i>n){
                    if(pris[n]) printf("%d %d\n",ll,i);
                    else printf("%d %d\n",l,i);
                    break;
                }
                ll=l;
                l=i;
            }
        }
    }
}