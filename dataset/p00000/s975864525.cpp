#include <iostream>

int main(){
    int i, j, ans;
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            std::cout << i;
            std::cout << "x";
            std::cout << j;
            std::cout << "=";
            ans = i*j;
            std::cout << ans << std::endl;
        }
    }
}