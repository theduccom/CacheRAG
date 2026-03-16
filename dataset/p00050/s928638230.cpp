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
    int mod=1000000007;
    string s;
    getline(cin, s);
    for (int i=0;i<s.size()-4;++i) {
        string t=s.substr(i,5);
        if(t=="apple") s.replace(s.begin()+i,s.begin()+i+5,"peach");
        if(t=="peach") s.replace(s.begin()+i,s.begin()+i+5,"apple");
    }
    cout<<s<<endl;
    return 0;
}