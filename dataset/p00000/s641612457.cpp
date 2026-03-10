#include <iostream>

int main(){

    for(std::size_t i=0;i<9;i++){
        for(std::size_t j=0;j<9;j++){
            std::cout<<i+1<<'x'<<j+1<<'='<<(i+1)*(j+1)<<std::endl;
        }
    }

    return 0;

}
