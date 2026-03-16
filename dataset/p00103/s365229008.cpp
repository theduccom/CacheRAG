#include <iostream>
#include <string>

int main()
{
    int inning_num;
    std::cin >> inning_num;
    
    std::string ev[] = {"HIT", "OUT", "HOMERUN"};
    
    while (inning_num--) {
        std::string s;
        int out = 0;
        int state = 0;
        int runner = 0;
        int point = 0;
        
        while (out < 3) {
            std::cin >> s;
            
            if (ev[0] == s) {
                state = state << 1;
                state++;
                
                if (state & (1 << 3)) {
                    point++;
                }else {
                    runner++;
                }
            } else if (ev[1] == s) {
                out++;
            } else {
                point += ++runner;
                runner = 0;
                state = 0;
            }
        }
        
        std::cout << point << std::endl;
    }
    
    return 0;
}