#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
typedef complex<double> xy_t;

xy_t P[50];

double cross_product(xy_t a, xy_t b){ //外積を求める(A-iB)*(C+iD)=(AC + BD)+i(AD-BC)からconj(a)*bの虚部を返せば良い
    return (conj(a)*b).imag();
}

int main(){
    int num = 0;
    double x, y;
    while(~scanf("%lf,%lf", &x, &y)){ //入力が続く間
        P[num] = xy_t(x, y); //P[num++]と書けば一行で済む
        num++;
    }
    double ans = 0; //面積を足していく
    for(int i = 0; i+2 < num; i++){
        xy_t a = P[0], b = P[i+1], c = P[i+2]; //一点aを固定した状態で和を考える
        ans += cross_product(b-a, c-a)/2; //cross_productは平行四辺形の面積なので2で割って足す
    }
    cout << ans << endl;
}


