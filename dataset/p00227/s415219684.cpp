
#include <iostream>
#include <queue>

int main(){
    while (true) {
        int n;  // I will buy n vegetables.
        int m;  // One bag contains m vegetables.

        std::cin >> n >> m;
        if ( n==0 && m==0 ) {
            return 0;
        }

        // input vegetable's cost.
        std::priority_queue<int> buy;	            // the first item in 'buy' is the most expensive.
        int in;
        for (int i=0; i < n ; ++i) {
            std::cin >> in;
            buy.push(in);
        }

        int cost = 0;  // How much must I pay?
        int x = 1;  // This is the 'x'th vegetable in the bag.
        while ( ! buy.empty() ) {
            // the 'm'th item in the bag is free!
            if ( x > m-1 ) {
                x = 1;
            }else{
                cost += buy.top();
                ++x;
            }
            buy.pop();
        }

        // output
        std::cout << cost << std::endl;
    }

    return 0;
}