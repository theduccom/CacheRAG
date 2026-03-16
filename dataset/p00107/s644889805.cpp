#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    int CheeseHeight, CheeseWidth, CheeseLength;
    
    while (std::cin >> CheeseHeight >> CheeseWidth >> CheeseLength) {
        if (CheeseHeight == 0 && CheeseWidth == 0 && CheeseLength == 0) {
            break;
        }
        
        std::array<int, 3> CheeseData = {CheeseHeight, CheeseWidth, CheeseLength};
        std::sort(CheeseData.begin(), CheeseData.end());
        
        int exit_num;
        std::cin >> exit_num;
        
        for (int i = 0; i < exit_num; ++i) {
            int exit_radius;
            
            std::cin >> exit_radius;
            
            double exit_limit = std::sqrt(
                    static_cast<double>(CheeseData.at(0) * CheeseData.at(0) / 4.0 
                    + CheeseData.at(1) * CheeseData.at(1) / 4.0)
                    );
            
            if (exit_limit < exit_radius) {
                std::cout << "OK" << std::endl;
            } else {
                std::cout << "NA" << std::endl;
            }
        }
    }

    return 0;
}