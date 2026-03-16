#include <cstdio>
#include <complex>
#include <vector>
using namespace std;
typedef complex<double> P;

int main(){
    vector<P> ps;
    double x,y;
    while(~scanf("%lf,%lf\n",&x,&y)){
        ps.push_back(P(x,y));
    }
    double S=0;
    for(int i=1;i+1<ps.size();i++){
        S+=abs((conj(ps[i]-ps[0])*(ps[i+1]-ps[0])).imag())/2;
    }
    printf("%.8f\n",S);
}