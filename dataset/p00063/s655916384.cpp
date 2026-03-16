#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main() {
    char s[111];
    int ans=0;
    while(scanf("%s",s)!=EOF) {
        int tmp=strlen(s);
        int f=1;
        for (int i=0;i<tmp/2;++i) {
            if (s[i]!=s[tmp-(i+1)]) {
                f=0;
                break;
            }
        }
        if (f) ans++;
    }

    printf("%d\n",ans);
    return 0;
}