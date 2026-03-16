#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    while(cin>>a){
        double S=a;
        for(int i=0;i<9;i++){
            a=((i&1)?a/3:a*2);
            S+=a;
        }
        cout<<setprecision(8)<<S<<endl;
    }

    return 0;
}