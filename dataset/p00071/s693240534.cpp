// Volume0 - 0071: Bombs Chain
#include <iostream>
#include <deque>
#include <string>
using namespace std;
 
class Solver {
private:
    static const int SIZE = 8;
    deque< deque<bool> > dd;
    void explode(int x, int y);
public:
    Solver() { dd.assign(SIZE, deque<bool>(SIZE,false)); }
    void input();
    void output();
};
void Solver::input() {
    string str;
    for(unsigned int i=0; i<dd.size(); ++i) {
        cin >> str;
        for(unsigned int j=0; j<str.size(); ++j) {
            dd[i][j] = (str[j] == '1');
        }
    }
    int x, y;
    cin >> x >> y;
    explode(x-1, y-1);
}
void Solver::explode(int x, int y) {
    if(0 <= x && x < SIZE && 0 <= y && y < SIZE && dd[y][x]) {
        dd[y][x] = false;
        for(int i=1; i<=3; ++i) {
            explode(x-i, y);
            explode(x+i, y);
            explode(x, y-i);
            explode(x, y+i);
        }
    }
}
void Solver::output() {
    for(unsigned int i=0; i<dd.size(); ++i) {
        for(unsigned int j=0; j<dd[i].size(); ++j) {
            cout << (dd[i][j] ? 1 : 0);
        }
        cout << endl;
    }
}
 
int main(int argc, char** argv) {
    int n;
    if(!(cin >> n)) return 0;
    Solver solver;
    for(int i=0; i<n; ++i) {
        solver.input();
        cout << "Data " << i+1 << ":" << endl;
        solver.output();
    }
    return 0;
}