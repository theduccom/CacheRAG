#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()
typedef int kz;

kz gcd(kz a,kz b) { if(b==0) return a; else gcd(b,a%b); }

int main(){
    int tmp[3]={1,0,0};
    char x,y;
    while (scanf("%c,%c",&x,&y)!=EOF){
        int a=-1,b=-1,c=-1;
        if (x=='A' || y=='A') a=0;
        if (x=='B' || y=='B') b=1;
        if (x=='C' || y=='C') c=2;
        if (a==0 && b==1) swap(tmp[0],tmp[1]);
        if (a==0 && c==2) swap(tmp[0],tmp[2]);
        if (b==1 && c==2) swap(tmp[1],tmp[2]);
    }
    if (tmp[0]==1) printf("A\n");
    if (tmp[1]==1) printf("B\n");
    if (tmp[2]==1) printf("C\n");
    return 0;
}