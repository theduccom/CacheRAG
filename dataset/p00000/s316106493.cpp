#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n)

int main()
{
    rep(i,9)rep(j,9) cout << i+1 << "x" << j + 1 << "=" << (i+1)*(j+1) << endl;
    return 0;
}