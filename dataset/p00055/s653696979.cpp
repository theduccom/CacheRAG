#include<bits/stdc++.h>
using namespace std;
double Sequence(double a,int n)
{
    if(n==10)return a*2;
    if(n%2==0)return a*2+Sequence(a*2,n+1);
    return a/3+Sequence(a/3,n+1);
}
int main()
{
    double n=0,a;
    while(cin>>a){
        n=a+Sequence(a,2);
        cout<<setprecision(8)<<n<<endl;
    }
}