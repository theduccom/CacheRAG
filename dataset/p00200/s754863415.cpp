#include <iostream>
#include <vector>
#define INF (int)1e9

void warshall_floyd(int m, int p, int q, std::vector<std::vector<int> > &dp) { 
    for (int i = 0; i < m; i++) {
        dp[i][i] = 0;
    }
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    return;
}

int main(void) {
    int n;
    int m;
    int a;
    int b;
    int cost;
    int time;
    int k;
    int p;
    int q;
    int r;

    while (true) {
        std::cin >> n >> m;
        if (n == 0 && m == 0) {
            break; 
        }
        std::vector<std::vector<int> > vcost(m, std::vector<int>(m, INF));
        std::vector<std::vector<int> > vtime(m, std::vector<int>(m, INF));

        for (int i = 0; i < n; i++) {
            std::cin >> a >> b >> cost >> time;
            --a;
            --b;
            vcost[a][b] = cost; 
            vcost[b][a] = cost; 
            vtime[a][b] = time; 
            vtime[b][a] = time; 
        }

        warshall_floyd(m, p, q, vcost); 
        warshall_floyd(m, p, q, vtime); 
        std::cin >> k;
        for (int i = 0; i < k; i++) {
            std::cin >> p >> q >> r;
            --p;
            --q;
            if (r == 0) {
                std::cout << vcost[p][q] << std::endl;            
            } else {
                std::cout << vtime[p][q] << std::endl;            
            }
        }
    } return 0;
}