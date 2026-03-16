#include <cstdio>

int main(){
    int w;

    for(;;){
    int cost=0;
    scanf("%d",&w);
    if(w==-1) break;
    if(w<=10)
    {
        cost=1150;
    }

    if(11<=w&&w<=20)
    {
        cost=1150;
        for(int i=10; i<w; i++)
        cost+=125;
    }

    if(21<=w&&w<=30)
    {
        cost=2400;
        for(int i=20; i<w; i++)
        cost+=140;
    }

    if(w>=31)
    {
            cost=3800;
            for(int i=30; i<w; i++)
        cost+=160;

    }
    printf("%d\n",4280-cost);
    }
}

