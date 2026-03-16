#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    double a,b;
    double total=0,ntotal=0,i=0;
    while(scanf("%lf,%lf",&a,&b)!=EOF){
        i++;
        total+=a*b;
        ntotal+=b;
    }
    cout<<total<<endl;
    cout<<(int)((ntotal/i)+0.5)<<endl;
    return 0;
}