#include <bits/stdc++.h>
using namespace std;
 
int cnt[10][10];
 
int main() {
    int x, y, s; char c;
    while(cin >> x >> c >> y >> c >> s) {
        for(int i = 0; i < 10; i ++)
            for(int j = 0; j < 10; j ++)
                if(s == 2) {
                    if(abs(x - i) <= 1 && abs(y - j) <= 1)
                        cnt[i][j] ++;
                } else {
                    if(abs(x - i) + abs(y - j) <= s / 2 + 1)
                        cnt[i][j] ++;
                }
    }
    auto a = (int*)cnt;
    cout << count(a, a + 100, 0) << '\n';
    cout << *max_element(a, a + 100) << '\n';
    return 0;
}
