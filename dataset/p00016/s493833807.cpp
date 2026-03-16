#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <complex>
#include <cstdio>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef complex<double> vec;

int main(){
    double dir = acos(-1)/2;
    vec v(0,0);
    int r,t;
    while(scanf("%d,%d",&r,&t)!=EOF && r|t){
        v += polar<double>(r,dir);
        dir+=1.0 * t / 180 * acos(-1);
    }
    cout << int(-v.real()) << endl << int(v.imag()) << endl;
}