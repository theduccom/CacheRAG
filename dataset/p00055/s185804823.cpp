#include<iostream>
#include<cstdio>
#define N 10
using namespace std;

int main(){
    double  n;
    while(cin >>n){
        double ans = n, b = n;
        for(int i = 2; i <= N; i++){
            double tmp;
            if(i % 2 == 0){
                tmp = (b * 2);
            } else{
                tmp = (b / 3);
            }
            ans += tmp;
            b = tmp;
        }
        printf("%f\n", ans);
    }
    return 0;
}