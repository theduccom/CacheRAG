#include <iostream>
#include <map>
using namespace std;

map<char, int> create_map() {
    map<char, int> m;
    m.insert({'I', 1});
    m.insert({'V', 5});
    m.insert({'X', 10});
    m.insert({'L', 50});
    m.insert({'C', 100});
    m.insert({'D', 500});
    m.insert({'M', 1000});
    return m;
}
map<char, int> m = create_map();
string str;
int idx;

int setN(char i, char j, char k) {
    int num = 0;
    if (idx >= 1 && (str[idx] == k || str[idx] == j) && str[idx-1] == i) { num = m[str[idx]] - m[str[idx-1]]; idx-=2; }
    else if (str[idx] == i) {
        for (; ;) {
            if (idx < 0) break;
            if (str[idx] != i) break;
            num+= m[str[idx--]];
        }
    }
    if (idx >= 0 && str[idx] == j) { num += m[str[idx--]]; }
    return num;
}


int main() {
    while(cin>>str) {
        int n = 0;
        idx = int(str.size()-1);
        n = setN('I', 'V', 'X');
        if (idx >= 0) n+= setN('X', 'L', 'C');
        if (idx >= 0) n+= setN('C', 'D', 'M');
        if (idx >= 0) for (; ;) { if (idx < 0) break; n+= m[str[idx--]]; }
        cout << n << endl;
    }
    return 0;
}

