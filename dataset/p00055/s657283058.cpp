#include <iostream>
#include <iomanip>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    double a[11];
    double fi;
    while(cin>>fi){
        rep(i,11) a[i]=0;
        a[0]=fi;
        for(int i=1;i<11;i++){
            if(i%2==1){
                a[i]=a[i-1]*2;
            }else{
                a[i]=a[i-1]/3;
            }
        }
        double sum=0;
        for(int i=0;i<10;i++) sum+=a[i]; 
        cout<< fixed <<setprecision(7) << sum << endl;
    }
    return 0;
}