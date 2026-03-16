
#include <iostream>
#include <complex>

using namespace std;

typedef complex<double> Point;

//ツ円Aツつェツ円Bツづーツ環ョツ全ツづ可甘慊づ楪つゥツ板サツ津ィツつキツづゥ
bool includesCircle(const Point &ca, double ra, const Point &cb, double rb) {
    return norm(ca-cb) < pow(ra-rb, 2) && rb < ra;
}

//ツ円Aツづ円Bツつェツ古ーツづュツづづつ「ツづゥツつゥツ板サツ津ィツつキツづゥ
bool intersectsCircle(const Point &ca, double ra, const Point &cb, double rb) {
    return norm(ca-cb) <= pow(ra+rb, 2);
}

int main() {
    int N;
    cin >> N;
    while(N--) {
        Point ca, cb;
        double ra, rb;
        cin >> ca.real() >> ca.imag() >> ra >> cb.real() >> cb.imag() >> rb;
        if(includesCircle(ca, ra, cb, rb)) cout << 2 << endl;
        else if(includesCircle(cb, rb, ca, ra)) cout << -2 << endl;
        else if(intersectsCircle(ca, ra, cb, rb)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}