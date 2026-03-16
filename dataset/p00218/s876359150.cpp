
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<sstream>
using namespace std;
int main(){
    int n,i,a[10000],b[10000],c[10000],ans1=0,ans2=0;
    while(cin>>n){
        if(n==0)break;
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
            ans1=(a[i]+b[i]+c[i])/3;
            ans2=(a[i]+b[i])/2;
            if(a[i]==100||b[i]==100||c[i]==100||ans1>=80||ans2>=90){
                cout<<"A"<<endl;
            }
            else if(ans1>=70||ans1>=50&&a[i]>=80||ans1>=50&&b[i]>=80){
                cout<<"B"<<endl;
            }
            else{
                cout<<"C"<<endl;
            }
        }
        
    }
     return 0;
}