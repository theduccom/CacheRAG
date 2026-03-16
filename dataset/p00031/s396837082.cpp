#include <iostream>

using namespace std;

int main()
{
        int w;
        int ans[10];

        while (cin >> w) {
                int cnt = 0;
                for (int i = 1; w; i*=2) {
                        if (w % 2) {
                                ans[cnt++] = i;
                        }
                        w /= 2;
                }
                for (int i = 0; i < cnt; i++) {
                        cout << ans[i];
                        if (i < cnt - 1) {
                                cout << " ";
                        }
                }
                cout << endl;
        }

        return 0;
}