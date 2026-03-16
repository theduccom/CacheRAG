#include <iostream>
#include <utility>

auto main () -> int
{
    int index = 1;
    int w;
    while (std::cin >> w && w)
    {
        int n;
        std::cin >> n;
        int dp [n + 1] [w + 1];
        int values [n];
        int weights [n];
        for (auto i = 0; i < n; ++ i)
        {
            std::scanf ("%d,%d" , values + i , weights + i);
        }
        
        for (auto j = 0; j <= w; ++ j)
        {
            dp [0] [j] = 0;
        }
        for (auto i = 1; i <= n; ++ i)
        {
            for (auto j = w; j >= 0; -- j)
            {
                dp [i] [j] = std::max (dp [i - 1] [j] , j + weights [i - 1] <= w ? dp [i - 1] [j + weights [i - 1]] + values [i - 1] : 0);
            }
        }
        auto res = std::make_pair (0 , 0);
        for (int j = 0; j <= w; ++ j)
        {
            if (res.first < dp [n] [j] || (res.first == dp [n] [j] && res.second > w - j))
            {
                res.first = dp [n] [j];
                res.second = w - j;
            }
        }
        
        std::cout << "Case " << index ++ << ":" << std::endl;
        std::cout << res.first << std::endl << res.second << std::endl;
    }
}