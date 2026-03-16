#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<complex>

using std::cout;
using std::cin;
using std::setw;
using std::setfill;
using std::string;
using std::pair;
using std::make_pair;
using std::vector;
using std::queue;
using std::deque;
using std::priority_queue;
using std::next_permutation;
//using std::iota;
using std::sort;
using std::greater;
using std::max;
using std::min;
using std::abs;
using std::complex;

#define INF 999999999;
#define MOD 1000000007

using ulli = unsigned long long int;

#define EVEL 1

#ifndef EVEL
#define dbug(X) std::cout << #X << ":" <<X<<" " ;
#define dbugf(s) std::cout << s << " ";
#define dbugln std::cout<<"\n";
#else
#define dbug(X) {}
#define dbugf(s) {}
#define dbugln {}
#endif

using Comp = complex<double>;

Comp p[25];
double SumS = 0.0;

int main(){
	cin.tie(0);
	std::ios::sync_with_stdio(false);

    double x, y;
    scanf("%lf,%lf", &x, &y);
    p[0] = Comp(x, y);
    scanf("%lf,%lf", &x, &y);
    p[1] = Comp(x, y);
    Comp a = p[1] - p[0], b;
    while( ~scanf("%lf,%lf", &x, &y) ){
        p[2] = Comp(x, y);
        b = p[2] - p[0];
        double su = (a.real() * b.imag() - a.imag() * b.real())/2;
        dbug(su)
        SumS += abs(su);
        a = b;
    }

    printf("%.6f\n", abs(SumS));

    return 0;
}
