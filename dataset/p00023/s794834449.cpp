#include <iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;
int n,a[50];
int solve(int i){
    if(i==1||i==0)return 1;
    return solve(i-1)+solve(i-2);
}
int main(){
    int nl;
    cin>>nl;
    for(int i=0; i<nl; i++){
        double xa,ya,ra,xb,yb,rb;
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    double k=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
    double s=sqrt(k);
    
    if(ra+rb<s)cout<<0<<endl;
    else if(ra+rb>=s&&s>=abs(ra-rb))cout<<1<<endl;
    else if(ra-rb>s)cout<<2<<endl;
    else if(rb-ra>s)cout<<-2<<endl;
    }
    return 0;
}