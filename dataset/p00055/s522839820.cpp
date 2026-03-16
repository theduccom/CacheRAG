#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#define INF 999999
using namespace std;
int main(){
    double N;
    while(cin>>N){
        double A=0;
        A=N;
        for(int i=2;i<11;i++){
            if(i%2==0)N*=2;
            else N/=3;
            A+=N;
        }
        printf("%.8lf\n",A);
    }
    return 0;
}