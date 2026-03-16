#include <iostream>
#include <vector>
#include <queue>
#define INF (int)1e9

int dijk(std::vector<std::vector<std::pair<int, int> > > fee, int s, int g); 

int main(void) {
    int n;
    int m;
    std::cin >> n >> m;
    std::vector<std::vector<std::pair<int, int> > > fee(n); //cost, to
    int a;
    int b;
    int c;
    int d;
    char temp;

    for (int i = 0; i < m; i++) {
        std::cin >> a >> temp >> b >> temp >> c >> temp >> d;    
        a--;
        b--;
        fee[a].push_back(std::make_pair(c, b));
        fee[b].push_back(std::make_pair(d, a));
    }

    int s;
    int g;
    int v;
    int p;
    std::cin >> s >> temp >> g >> temp >> v >> temp >> p;
    --s;
    --g;

    int go_cost = dijk(fee, s, g);
    int back_cost = dijk(fee, g, s);

    std::cout << v - p - go_cost - back_cost << std::endl;

    return 0;
}

int dijk(std::vector<std::vector<std::pair<int, int> > > fee, int s, int g) {
    std::vector<int> cost(fee.size(), INF);
    std::vector<int> search(fee.size(), 0);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int, int> > > pq;
    int first;
    int second;
    std::pair<int, int> target;

    pq.push(std::make_pair(0, s));
    cost[s] = 0;

    while(1) {
        if (pq.empty() == true) {
            break;
        }
        first = pq.top().first;
        second = pq.top().second;
        pq.pop();
        if (search[second] != 0) {
            continue;
        }
        search[second] = 1;
        for (int i = 0; i < fee[second].size(); i++) {
            target = fee[second][i];
            pq.push(std::make_pair(target.first + cost[second], target.second)); 
            if (target.first + cost[second] < cost[target.second]) {
                cost[target.second] = target.first + cost[second];
            }
        }
    }

    return cost[g];
}