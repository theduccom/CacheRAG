#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define INF (int)1e9


int common_part(int m, int p, int q, std::vector<std::vector<std::pair<int, int> > > v); 
void bellman_ford(int m, std::vector<std::vector<std::pair<int, int> > > &v, std::vector<int> &rvec); 
void dijkstra(int m, int p, std::vector<std::vector<std::pair<int, int> > > &v, std::vector<int> &rvec); 


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

    int res;

    while (true) {
        std::cin >> n >> m;
        if (n == 0 && m == 0) {
            break; 
        }

        std::vector<std::vector<std::pair<int, int> > > vcost(m);
        std::vector<std::vector<std::pair<int, int> > > vtime(m);

        for (int i = 0; i < n; i++) {
            std::cin >> a >> b >> cost >> time;
            --a;
            --b;
            vcost[a].push_back(std::make_pair(cost, b));
            vcost[b].push_back(std::make_pair(cost, a));
            vtime[a].push_back(std::make_pair(time, b));
            vtime[b].push_back(std::make_pair(time, a));
        }

        std::cin >> k;

        for (int i = 0; i < k; i++) {
            std::cin >> p >> q >> r;
            --p;
            --q;

            // Bellman Ford or Dijkstra
            if (r == 0) {
                res = common_part(m, p, q, vcost);
            } else {
                res = common_part(m, p, q, vtime);
            }
            std::cout << res << std::endl;
        }
    }
    return 0;
}

void bellman_ford(int m, std::vector<std::vector<std::pair<int, int> > > &v, std::vector<int> &rvec) {
    int value;
    int target;
    bool flag;

    do{
        flag = false;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < v[i].size(); j++) {
                value = v[i][j].first;
                target = v[i][j].second;
                if (rvec[target] > rvec[i] + value) {
                    rvec[target] = rvec[i] + value;
                    flag = true;
                }
            }
        }

    } while(flag);

    return;
} 

void dijkstra(int m, int p, std::vector<std::vector<std::pair<int, int> > > &v, std::vector<int> &rvec) {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int, int> > > pq;
    std::vector<int> search_count(m, 0);
    int start_value;
    int start_target;
    int end_value;
    int end_target;
    pq.push(std::make_pair(rvec[p], p));

    while(true) {
        if (pq.empty() == 1) {
           break; 
        }
        start_value = pq.top().first; 
        start_target = pq.top().second;
        pq.pop();
        if (search_count[start_target] == 0) {
            ++search_count[start_target];
            for (int i = 0; i < v[start_target].size(); i++) {
                end_value = v[start_target][i].first;
                end_target = v[start_target][i].second;
                if (rvec[end_target] > end_value + rvec[start_target]) {
                    rvec[end_target] = end_value + rvec[start_target];
                }
                pq.push(std::make_pair(rvec[end_target], end_target));
            }
        }
    }

    return;
} 

int common_part(int m, int p, int q, std::vector<std::vector<std::pair<int, int> > > v) {
    std::vector<int> rvec(m, INF);
    rvec[p] = 0;

    bellman_ford(m, v, rvec);
    //dijkstra(m, p,  v, rvec);

    return rvec[q];
} 