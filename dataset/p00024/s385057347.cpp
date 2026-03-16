#include<iostream>
#include<cmath>

int main(void){
    const double g=9.8;
    double v;
    while(std::cin>>v){
        int n=1;
        while(1){
            if(v*v<=2*g*5*(n-1)){
                std::cout<<n<<std::endl;
                  break;
            }
            n++;
        }
    }
    return 0;
}
