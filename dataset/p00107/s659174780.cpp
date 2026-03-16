#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;
int main(void){

    int x[3],n;
    while(cin>>x[0]>>x[1]>>x[2],x[0]){
        cin>>n;
        sort(x,x+3);
        x[0] /= 2;
        x[1] /= 2;
        double a = sqrt(x[0] * x[0] + x[1] * x[1]);
        while(n--){
            double r;
            cin>>r;
            if(r<=a)cout<<"NA"<<endl;
            else cout<<"OK"<<endl;
        }
    }


    return 0;
}