#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
 
int main(){
    double en;
    double i,y,k;
    int n;
    while(cin >> i >> y >> k , i * y * k){
        double min = sqrt (i * i + y * y);
        if(min > sqrt (k * k + y * y) ) min = sqrt (k * k + y * y);
        if(min > sqrt (i * i + k * k) ) min = sqrt (i * i + k * k);
        cin>>n;
        for(int i = 0 ; i < n ; i++){
            double m;
            cin>>m;
            //cout<<1.0*2*m<<" "<<min<<endl;
             if(1.0*min<1.0*m*2)cout << "OK" << endl;
             else cout << "NA" << endl; 
        }
         
    }
 
}