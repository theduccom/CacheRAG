#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

int main()
{
    rep(j,9)rep(i,9) cout << j+1 << "x" << i+1 << "=" << (j+1)*(i+1) << endl;
        return 0;
}