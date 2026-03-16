#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int num_vegetable, bag_capacity;
    while(std::cin >> num_vegetable >> bag_capacity){
        if(num_vegetable == 0 && bag_capacity == 0)
            break;
        std::vector<int> price;
        for(int p, i = 0; i < num_vegetable; ++i){
            std::cin >> p;
            price.push_back(p);
        }
        
        std::sort(price.begin(), price.end(), std::greater<int>());

        int price_sum = 0;
        for(int i = 0; i < num_vegetable; ++i){
            if((i + 1) % bag_capacity != 0)
                price_sum += price.at(i);
        }
        std::cout << price_sum << std::endl;
    }
}