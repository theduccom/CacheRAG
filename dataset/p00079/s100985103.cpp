#include<iostream>
#include<iomanip>
#include<complex>
#include<cmath>
#include<cstdlib>
using namespace std;

typedef complex<double> xy_t;
xy_t P[21];

double heron(xy_t p,xy_t q,xy_t r){
    double a=abs(p-q),b=abs(q-r),c=abs(r-p);
    double z=(a+b+c)/2;
    return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main(){
    double x,y;
    char noise;
    int n=0;

    while(cin>>x>>noise>>y){
        P[n++]=xy_t(x,y);
    }
    //i?????????????????°????????´??????????????????
    //cerr<<n<<"\n";

    double S=0.0;
    for(int i=0;i<n-2;++i){
        S+=heron(P[0],P[i+1],P[i+2]);
    }

    cout<<fixed<<setprecision(6)<<S<<"\n";
}