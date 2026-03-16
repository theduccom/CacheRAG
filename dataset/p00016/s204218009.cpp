#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000

using namespace std;
typedef long long ll;

int main(){
    
    int m,n;
    char c;
    double X=0,Y=0;
    double now=90;
    while(cin>>m>>c>>n && (m!=0 || n!=0)){
//        cout<<now*(2*M_PI/360)<<endl;
        
        X+=m*cos(now*(2*M_PI/360));
        Y+=m*sin(now*(2*M_PI/360));
        now-=n;
    }
    printf("%d\n",(int)X);
    printf("%d\n",(int)Y);
    return 0;
}