#include<bits/stdc++.h>
#define int double
using namespace std;
 
signed main(){
int a,b;
while(cin>>a>>b,a||b){
    int c=a*a;
    int d=sqrt((a*a/4)+b*b);
    c+=a*d*2;
    cout<<fixed<<setprecision(10)<<c<<endl;
    }
}