#include<iostream>
#include<cmath>

#define PI 3.1415926535

int main(void){
    double dst,angl,angl_now;
    double x,y;
    x=y=0;
    angl_now=90;
    char ch;
    while(std::cin>>dst>>ch>>angl){
        if(dst==0 && angl==0) break;
        x+=dst*cos(PI/180*angl_now);
        y+=dst*sin(PI/180*angl_now);
        angl_now-=angl;
    }
    std::cout<<(int)x<<std::endl<<(int)y<<std::endl;
    return 0;
}
