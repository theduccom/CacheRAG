#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int a,b,c;
    int ans1,ans2;
    ans1=ans2=0;
    while(~scanf("%d,%d,%d",&a,&b,&c)) {
        if(a*a + b*b == c*c) ans1++;
        if(a==b) ans2++;
    }
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}