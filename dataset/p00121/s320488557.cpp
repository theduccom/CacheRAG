#include <cstdio>
#include <string>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;
const int MAXN = 8;
const string& WIN = "01234567";
const int dx[4] = { 1, -1, 0, 0 };
const int dy[4] = { 0, 0, 1, -1 };
struct Status {
    string puzzle;
    int x;
    int y;
    int num;
    Status(const string& p, int x, int y, int n) :
        puzzle(p), x(x), y(y), num(n) { }
};
unordered_map<string, int> HM;
bool isExist(int x, int y) {
    return 0 <= x && x < 2 && 0 <= y && y < 4;
}
void init() {
    queue<Status> Q;
    Q.push(Status(WIN, 0, 0, 0));
    HM.insert(make_pair(WIN, 0));
    while (!Q.empty()) {
        string p = Q.front().puzzle;
        int x = Q.front().x, y = Q.front().y, num = Q.front().num + 1;
        Q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (isExist(nx, ny)) {
                swap(p[x * 4 + y], p[nx * 4 + ny]);
                if (HM.count(p) == 0) {
                    Q.push(Status(p, nx, ny, num));
                    HM.insert(make_pair(p, num));
                }
                swap(p[x * 4 + y], p[nx * 4 + ny]);
            }
        }
    }
}
int main() {
    init();
    char temp;
    string puzzle;
    while (scanf("%c%*c", &temp) != EOF) {
        puzzle = temp;
        for (int i = 1; i < MAXN; ++i) {
            scanf("%c%*c", &temp);
            puzzle += temp;
        }
        printf("%d\n", HM[puzzle]);
    }
    return 0;
}
