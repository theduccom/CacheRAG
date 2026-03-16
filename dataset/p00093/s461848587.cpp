#include <iostream>
#include <vector>


void judging(int x, int y)  //start,end
{
    int count = 0;  //count the number of non-leap-year
    for (int j = x; j <= y; j++) {
        if (j % 400 == 0) {
            std::cout << j << std::endl;
        } else if (j % 100 == 0) {
            count++;
        } else if (j % 4 == 0) {
            std::cout << j << std::endl;
        } else {
            count++;
        }
    }
    if (count == y - x + 1) {
        std::cout << "NA" << std::endl;
    }
    return;
}


int main()
{
    std::vector<std::pair<int, int>> year(100);  //start,end(size of vector is temporary)
    int size = 0;                                //current array subscript
    std::cin >> year[size].first >> year[size].second;
    while (year[size].first != 0 || year[size].second != 0) {
        size++;
        std::cin >> year[size].first >> year[size].second;
    }
    for (int i = 0; i < size - 1; i++) {
        judging(year[i].first, year[i].second);
        std::cout << std::endl;
    }
    judging(year[size - 1].first, year[size - 1].second);
    return 0;
}