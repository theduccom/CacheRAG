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


int main(){
    int mod=1000000007;
    map<char, int> d;
    d['I']=1;
    d['V']=5;
    d['X']=10;
    d['L']=50;
    d['C']=100;
    d['D']=500;
    d['M']=1000;
    char c[60];
    int len,t,value;
    while (fgets(c,60,stdin)!=NULL)  {
        len=strlen(c)-1;
        t=0,value=1000;
        for (int i=0;i<len;++i) {
            if (value>=d[c[i]]) {
                value=d[c[i]];
                t+=value;
            } else {
                t=t-value*2;
                value=d[c[i]];
                t+=value;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}