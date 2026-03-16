#include <iostream>
#include <algorithm>

char judge_grade(int pm, int pe, int pj)
{
    if(std::max({pm, pe, pj}) == 100 || (pm + pe) / 2 >= 90 || (pm + pe + pj) / 3 >= 80) {
        return 'A';
    } else if((pm + pe + pj) / 3 >= 70 || ((pm + pe + pj) / 3 >= 50 && std::max(pm, pe) >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
}

int main()
{
    int num;
    
    while(num != 0) {

        std::cin >> num;

        int pm, pe, pj;

        for(int i = 0; i < num; i++) {
            std::cin >> pm >> pe >> pj;
            std::cout << judge_grade(pm, pe, pj) << std::endl;
        }

    }

    return 0;
}