#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a;

    while(cin>>a){
        double sum=a;

        for(int n=2;n<=10;n++){
            if(n&1){
                sum+=a/3.0;
                a/=3.0;
            }else{
                sum+=a*2.0;
                a*=2.0;
            }
        }

        cout<<setprecision(8)<<setiosflags(ios::fixed)<<sum<<endl;
    }
    
    return 0;
}