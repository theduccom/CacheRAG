#include <iostream>
#include <algorithm>
#include <climits>

#define INF INT_MAX / 2
#define REP(i, m, n) for(int i = m; i < static_cast<int>(n); ++i)
int main()
{
    int line_num, station_num;
    
    while (std::cin >> line_num >> station_num) {
        
        if (line_num == 0 && station_num == 0) break;

        int map[2][101][101];
        
        REP(i, 0, 2) REP(j, 0, 101) REP(k, 0, 101) map[i][j][k] = INF;
        
        REP(i, 0, line_num) {
            int a, b, cost, time;
            std::cin >> a >> b >> cost >> time;
            --a;
            --b;
            map[0][a][b] = map[0][b][a] = cost;
            map[1][a][b] = map[1][b][a] = time;
        }
        
        REP(k, 0, station_num) {
            REP(i, 0, station_num) {
                REP(j, 0, station_num) {
                    REP(l, 0, 2) {
                        map[l][i][j] = std::min(map[l][i][j], map[l][i][k] +
                                                map[l][k][j]);
                    }
                }
            }
        }

        int input_num;

        std::cin >> input_num;

        REP(i, 0, input_num) {
            int p, q, r;

            std::cin >> p >> q >> r;
            --p;
            --q;
            std::cout << map[r][p][q] << std::endl;
        }
    
    }
    return 0;
}