#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


int main(void)
{
    while(1){
        int x,h;
        cin>>x>>h;
        if(x==0&&h==0)break;
        double h2,x2;
        x2=(double)x;
        h2=sqrt(((double)x/2.0)*((double)x/2.0)+((double)h)*((double)h));
        cout<<fixed<<setprecision(6)<<x2*h2*2.0+x2*x2<<endl;
    }
    
}