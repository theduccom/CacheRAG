#include <iostream>

struct 
{} undefined;

template <typename T , unsigned H , unsigned W>
auto input (T (& a) [H] [W]) -> bool
{
    bool result = static_cast <bool> (std::cin >> a [0] [0]);
    if (! result)
    {
        return false;
    }
    for (auto x = 1u; x < W; ++ x)
    {
        std::cin >> a [0] [x];
    }
    for (auto y = 1u; y < H; ++ y)
    {
        for (auto x = 0u; x < W; ++ x)
        {
            std::cin >> a [y] [x];
        }
    }
    return true;
}

template <unsigned H , unsigned W>
auto at (char (& a) [H] [W] , unsigned x , unsigned y) -> bool
{
    if (0 <= x && x < W && 0 <= y && y < H)
    {
        return a [y] [x] == '1';
    }
    else
    {
        return false;
    }
}

template <unsigned H , unsigned W>
auto check (char (& a) [H] [W]) -> char
{
    for (auto y = 0u; y < H; ++ y)
    {
        for (auto x = 0u; x < W; ++ x)
        {
            if (at (a , x , y))
            {
                // ??????????????? -> A,C,E,G
                if (at (a , x + 1 , y))
                {
                    // ??????????????? -> A,G
                    if (at (a , x , y + 1))
                    {
                        // ??????????????????????????? -> A
                        if (at (a , x + 1 , y + 1))
                        {
                            return 'A';
                        }
                        // ??????????????????????????? -> G
                        else
                        {
                            return 'G';
                        }
                    }
                    // ??????????????? -> C,E
                    else
                    {
                        // 2??????????????? -> C
                        if (at (a , x + 2 , y))
                        {
                            return 'C';
                        }
                        // 2?????????????????? -> E
                        else
                        {
                            return 'E';
                        }
                    }
                }
                // ??????????????? -> B,D,F
                else
                {
                    // 2??????????????? -> B
                    if (at (a , x , y + 2))
                    {
                        return 'B';
                    }
                    // ???????????????????????? -> F
                    else if (at (a , x + 1 , y + 1))
                    {
                        return 'F';
                    }
                    // ???????????????
                    else
                    {
                        return 'D';
                    }
                }
                throw undefined;
            }
        }
    }
    return 'X';
}

auto main () -> int
{
    char a [8] [8];
    while (input (a))
    {
        std::cout << check (a) << std::endl;
    }
}