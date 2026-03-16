#include<iostream>
#include<cmath>

struct Point{
    Point(void){
        x=y=r=0;
    }
    double x,y;
    double r;
};

double di(struct Point a,struct Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(void){
    int n;
    std::cin>>n;
    struct Point a,b;
    for(int i=0;i<n;i++){
        int judge;
        std::cin>>a.x>>a.y>>a.r>>b.x>>b.y>>b.r;
        double d=di(a,b);
        if(d+b.r<a.r)
            judge=2;
        else if(d+a.r<b.r)
            judge=-2;
        else if(d<=a.r+b.r)
            judge=1;
        else
            judge=0;
        std::cout<<judge<<std::endl;
    }
    return 0;
}
