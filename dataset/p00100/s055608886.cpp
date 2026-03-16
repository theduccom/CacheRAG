#include <iostream>
#include <queue>

int main()
{
    int n, no;
    long long yen, num;
    long long total[4001];
    std::queue<int> que;
    
    for (int i = 0; i < 4001; ++i) {
        total[i] = 0;
    }

    std::cin >> n;
    
    while (n != 0) {
        
        bool update = false;
        /*input*/
        for (int i = 0; i < n; ++i) {
            scanf("%d %lld %lld", &no, &yen, &num);
            total[no] += yen * num;
            que.push(no);
        }
        /*output*/
        while (!que.empty()) {
            if (total[que.front()] >= 1000000) {
                std::cout << que.front() << std::endl;
                update = true;
            }
            total[que.front()] = 0;
            que.pop();
        }
        if (!update) {
            std::cout << "NA" << std::endl;
        }
        std::cin >> n;
    }
    
    return 0;
}