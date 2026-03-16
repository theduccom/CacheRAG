#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    double b;
    while(cin>>b){
        double a[11];
        a[1]=b;
        double sum=b;
        for(int i=2;i<=10;i++){
            if(i%2){
                a[i]=a[i-1]/3;
            }else{
                a[i]=a[i-1]*2;
            }
            sum+=a[i];
        }
        printf("%.9lf\n",sum);
    }   
}

