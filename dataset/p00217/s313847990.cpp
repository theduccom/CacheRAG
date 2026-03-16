#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        int Max=0,Max_P;
        for(int i=0;i<n;i++){
            int p,d1,d2;
            cin>>p>>d1>>d2;
            if(Max<d1+d2){
                Max=d1+d2;
                Max_P=p;
            }
        }
        cout<<Max_P<<" "<<Max<<endl;
    }
}