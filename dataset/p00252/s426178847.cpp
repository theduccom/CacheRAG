#include <iostream>

int main()
{
    int b1,b2,b3;

    std::cin >> b1;
    std::cin >> b2;
    std::cin >> b3;

    if (b3 == 1) {
        std::cout << "Open" << std::endl;
    } else if (b1 == 1 && b2 == 1){
        std::cout << "Open" << std::endl;
    } else {
        std::cout << "Close" << std::endl;
    }

    return 0;


}