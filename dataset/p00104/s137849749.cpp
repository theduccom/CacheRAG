#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#define REP(i, m, n) for(int i = m; i < static_cast<int>(n); ++i)
int main()
{
    int height, width;
    std::vector<std::string> tile = {">", "<", "^", "v", "."};
    
    while (std::cin >> height >> width) {
        if (height == 0 && width == 0) {
            break;
        }
        
        std::vector< std::vector<std::string> > table;
            
        REP(i, 0, height) {
        table.push_back( std::vector<std::string>() );
            
        REP(j, 0, width) {
            std::string data;
            std::cin >> std::setw(1) >> data;
            table[i].push_back(data);
        }
    }
            
        
        bool flag = true;

        while (flag){
            static int i = 0;
            static int j = 0;
            
            if (table[i][j] == tile[0]) {
                table[i][j] = ",";
                j++;
                continue;
            } else if (table[i][j] == tile[1]) {
                table[i][j] = ",";
                j--;
                continue;
            } else if (table[i][j] == tile[2]) {
                table[i][j] = ",";
                i--;
                continue;
            } else if (table[i][j] == tile[3]) {
                table[i][j] = ",";
                i++;
                continue;
            } else if (table[i][j] == ",") {
                flag = false;
                std::cout << "LOOP" << std::endl;
                i = j = 0;
            } else {
                flag = false;
                std::cout << j << " " << i << std::endl;
                i = j = 0;
            }
        }
    }
    
    return 0;
}
    