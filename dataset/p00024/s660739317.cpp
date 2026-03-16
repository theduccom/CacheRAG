#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int N;
    double v,g=9.8,t;
    while(cin >> v){
        t=v/g;
        for(N=1 ;; N++){
            if(N*5-5 > 1.0/2.0*g*t*t){
                break;
            }
        }
        cout << N << endl;
    }
    return 0;
}