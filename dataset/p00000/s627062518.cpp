#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

int main()
{
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++) cout << i << "x" << j << "=" << i * j << endl;
    return 0;
}