#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

const int MAX_N = 8;
const int RULE_NUM = 3;
const int RULE[MAX_N][RULE_NUM] = {{1, 4, -1}, {0, 2, 5}, {1, 3, 6}, {2, 7, -1},
                                   {0, 5, -1}, {1, 4, 6}, {2, 5, 7}, {3, 6, -1}};

map<string, int> BFS() {
    string goal_numbers;
    for (size_t i = 0; i < MAX_N; i++) {
        goal_numbers.push_back(i + '0');
    }

    map<string, int> distances;
    queue<string> que;
    que.push(goal_numbers);
    distances[goal_numbers] = 0;

    while (que.size()) {
        string now_numbers = que.front();
        que.pop();

        auto zero_pos = now_numbers.find('0');
        for (size_t i = 0; i < RULE_NUM; i++) {
            int new_zero_pos = RULE[zero_pos][i];
            if (new_zero_pos < 0) { continue; }
            string new_numbers = now_numbers;
            swap(new_numbers[zero_pos], new_numbers[new_zero_pos]);
            if (distances.find(new_numbers) == distances.end()) {
                que.push(new_numbers);
                distances[new_numbers] = distances[now_numbers] + 1;
            }
        }
    }

    return distances;
}

int main() {
    map<string, int> distances = BFS();

    string line;
    while (getline(cin, line)) {
        stringstream ss;
        ss << line;
        string numbers;
        for (size_t i = 0; i < MAX_N; i++) {
            char c;
            ss >> c;
            numbers += c;
        }
        cout << distances[numbers] << endl;
    }

    return 0;
}