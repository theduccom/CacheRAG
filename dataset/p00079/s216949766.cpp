#include<iostream>
#include<complex>
#include<cmath>
using namespace std;
typedef complex<double> xy_t;

xy_t p[110];

double cross_product(xy_t a,xy_t b){
    return (conj(a)*b).imag();
}

int main(){
    int n=0;
    double x,y,s=0.0;
    xy_t a,b,c;
    while(~scanf("%lf,%lf",&x,&y)){
        p[n]=xy_t(x,y);
        n++;
        //cout<<p[n]<<endl;
    }
    a=p[0];
    for(int i=0;i<n-2;i++){
        b=p[i+1],c=p[i+2];
        s+=cross_product(b-a,c-a)/2;
        //cout<<b<<c<<s<<endl;
    }
    cout<<abs(s)<<endl;
}
