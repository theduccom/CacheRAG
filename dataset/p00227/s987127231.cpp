#include <iostream>
#include <queue>
  
int main(){
    std::priority_queue<u_int>  vegetable;
    u_int n, m, price;
     
    while(1){
        std::cin >> n >> m;
        if(n == 0 && m == 0)
            break;
             
        for(u_int i = 0; i < n; ++i){
            std::cin >> price;
            vegetable.push(price);
        }
         
        u_int sum = 0;
        for(u_int i = 1; i <= n; ++i){
            if(i % m != 0){
                sum += vegetable.top();
            }
            vegetable.pop();
        }
        std::cout << sum << std::endl;
    }
  
    return 0;
}