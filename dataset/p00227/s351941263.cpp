#include <iostream>
#include <queue>
 
int main(){
    std::priority_queue<u_int> prices;
    u_int num_of_item, size_of_bag, price;
    
    while(1){
        std::cin >> num_of_item >> size_of_bag;
        if(num_of_item == 0 && size_of_bag == 0)
            break;
            
        for(u_int i = 0; i < num_of_item; ++i){
            std::cin >> price;
            prices.push(price);
        }
        
        u_int sum = 0;
        while(!prices.empty()){
            for(u_int i = 0; i < size_of_bag; ++i){
                if(i != size_of_bag - 1){
                    sum += prices.top();
                }
                prices.pop();
                if(prices.empty())
                    break;
            }
        }
        std::cout << sum << std::endl;
    }
 
    return 0;
}