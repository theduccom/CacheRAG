#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <utility>
#include <map>

//enum { OCEAN = 0, LAND = 1 };

int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
void search(std::vector<std::string> &grid, int r, int c) {
    if (!(0 <= r && r < 12 && 0 <= c && c < 12))
        return;

    if (grid[r][c] == '0') {
        return;
    }
    grid[r][c] = '0';
    for (int i = 0; i<4; i++) {
        int newr = r + dx[i], newc = c + dy[i];
        if (!(0 <= newr && newr < 12 && 0 <= newc && newc < 12))
            continue;

        if (grid[newr][newc] == '0') {
            continue;
        }

        search(grid, newr, newc);
    }
}
int count_land(std::vector<std::string> &grid) {
    int res = 0;
    for (int i = 0; i<12; i++) {
        for (int j = 0; j<12; j++) {
            if (grid[i][j] == '1') {
                ++res;
                search(grid, i, j);
            }
        }
    }
    return res;
}
int main(void) {
    std::vector<std::string> grid(12);
    int input = 0;
    
    while (std::cin>>grid[0],std::cin){
        for (int i = 1; i < 12; i++) {
            std::cin >> grid[i];
        }
    std::cout << count_land(grid) << std::endl;
    
    }
    
    return 0;
}
