#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <chrono>
#include <random>
#include <tuple>
#include <utility>
#include <fstream>
#include <complex>

const long INF = (1l << 30);
const long LINF = (1l << 60);

typedef std::complex<double> Com;
Com ver[25];

double cross_product(Com x, Com y){
    return (conj(x)*y).imag();
}

int main(){
    double x, y;
    long n = 0;
    while(EOF != scanf("%lf,%lf", &x, &y)){
        ver[n] = Com(x, y);
        n++;
        //printf("pass\n");
    }
    /*
    for(int i = 0; i < n; i++){
        std::cout << ver[i] << std::endl;
    }
    //*/
    long ans = 0;
    for(int i = 1; i < n-1; i++){
        ans += cross_product(ver[i+1]-ver[0], ver[i]-ver[0]);
    }
    printf("%lf\n", std::abs(ans)/2.0);
}

