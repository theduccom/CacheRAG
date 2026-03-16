#include <iostream>
using namespace std;
int main(void){
    double v;
    double t; //球が割れるのに必要な最低速度になるのは落下し始めてから何秒後か
    double y; //t秒後に物体が落下した距離
    int N; //球が割れる建物の階の最小値

    while(cin >> v){
        t = v / 9.8;
        y = 4.9 * t * t;
        N = (y + 5) / 5; 

        cout << N + 1 << endl;
    }
}
