#include <iostream>
#include <vector>

template <typename T>
auto move (T & a, int & x , int & y) -> bool
{
    while (true)
    {
        switch (a [y] [x])
        {
        case '>' :
            a [y] [x] = 'x';
            ++ x;
            break;
        case '<' :
            a [y] [x] = 'x';
            -- x;
            break;
        case '^' :
            a [y] [x] = 'x';
            -- y;
            break;
        case 'v' :
            a [y] [x] = 'x';
            ++ y;
            break;
        case '.' :
            return true;
        case 'x' :
            return false;
        }
    }
}

auto main () -> int
{
    int h , w;
    while (std::cin >> h >> w && h && w)
    {
        std::vector <std::vector <char>> a (h , std::vector <char> (w));
        for (auto && line : a)
        {
            for (auto && elem : line)
            {
                std::cin >> elem;
            }
        }

        int x = 0 , y = 0;
        if (move (a , x , y))
        {
            std::cout << x << ' ' << y << std::endl;
        }
        else
        {
            std::cout << "LOOP" << std::endl;
        }
    }
}