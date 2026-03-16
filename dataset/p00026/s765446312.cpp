#include <utility>
#include <iostream>
#include <algorithm>
#include <cstdio>

class Paper
{
private :
    int data [10] [10];
private :
    static auto isValidX (int x) -> bool
    {
        return 0 <= x && x < 10;
    }
    static auto isValidY (int y) -> bool
    {
        return 0 <= y && y < 10;
    }
public :
    Paper ()
        : data {{{}}}
    {
    }
    auto increase (int x , int y) -> void
    {
        if (isValidX (x) && isValidY (y))
        {
            ++ data [x] [y];
        }
    }
    auto dropSmall (int x, int y) -> void
    {
        increase (x , y);
        increase (x - 1 , y);
        increase (x + 1 , y);
        increase (x , y - 1);
        increase (x , y + 1);
    }
    auto dropMidium (int x , int y) -> void
    {
        dropSmall (x , y);
        increase (x - 1 , y - 1);
        increase (x + 1 , y - 1);
        increase (x - 1 , y + 1);
        increase (x + 1 , y + 1);
    }
    auto dropLarge (int x , int y) -> void
    {
        dropMidium (x , y);
        increase (x - 2 , y);
        increase (x + 2 , y);
        increase (x , y - 2);
        increase (x , y + 2);
    }
    auto getResult () -> std::pair <int , int>
    {
        int zeroCellNum = 0;
        int maxValue = 0;
        for (auto && line : data)
        {
            for (auto && elem : line)
            {
                zeroCellNum += (elem == 0);
                maxValue = std::max (maxValue , elem);
            }
        }
        return std::make_pair (zeroCellNum , maxValue);
    }
};

auto main () -> int
{
    Paper paper;
    int x , y , size;
    while (std::scanf ("%d,%d,%d" , & x , & y , & size) == 3)
    {
        switch (size)
        {
        case 1:
            paper.dropSmall (x , y);
            break;
        case 2:
            paper.dropMidium (x , y);
            break;
        case 3:
            paper.dropLarge (x , y);
            break;
        }
    }
    auto res = paper.getResult ();
    std::cout << res.first << std::endl;
    std::cout << res.second << std::endl;
}