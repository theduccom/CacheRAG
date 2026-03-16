#include<iostream>
#include<iomanip>
using namespace std;

double solve(double a){
    double all=a;
    for(int i=2; i<11; i++){
        if(i%2){
            a /= 3;
            all += a;
        }else{
            a *= 2;
            all += a;
        }
    }
    return all;
}

int main()
{
    double a;
    while(cin>>a,!cin.eof()){
        cout<<fixed<<setprecision(8);
        cout<<solve(a)<<endl;
    }
    return 0;
}