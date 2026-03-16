#include <iostream>
using namespace std;
int main(void){
    int n,p[10100];
    int d1[10100],d2[10100];
    
    while(true){
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=0; i<n; i++){
            cin>>p[i]>>d1[i]>>d2[i];
        }
        int d_sum[10100];
        int d_max=0, p_max;
        
        for(int i=0; i<n; i++){
            d_sum[i]=d1[i]+d2[i];
            if(d_sum[i]>d_max){
                d_max=d_sum[i];
                p_max=p[i];
            }
        }
        cout<<p_max<<" "<<d_max<<endl;
    }
}

