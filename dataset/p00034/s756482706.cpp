#include    <iostream>
#include    <cstdio>
#include    <numeric>

using namespace std;

int main() {
    int l[10], v1, v2;
    int length = 0;
    // 二点間の距離と、各点から始まる速度を与えたときに交差する点の位置を返す
    auto crossPoint = [&]() {
        // 交差した瞬間、それぞれの列車の変位は一致する
        // よって、交差する時間をt、距離をlとすると、
        // 「v1*t = l-v2*t」より、tについて解くと「t = l / (v1 + v2)」、
        // よって、変位は「(v1 * l) / (v1 + v2)」となる。
        return (double)(v1 * length) / (double)(v1 + v2);
    };

    while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2)) {
        length = accumulate(l, l+10, 0);
        double pos = crossPoint();          // 列車の交差時間の取得
        int i = 1, ls = l[0];               // 区間の計算

        while(ls < pos) { ls += l[i++]; }
        cout << i << endl;
    }

    return 0;
}
