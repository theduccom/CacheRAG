#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int n,m;
    char s[210];
    fgets(s,210,stdin);
    int len=strlen(s);
    for (int i=0;i<len;i++) {
        if (islower(s[i])) {
            s[i]=toupper(s[i]);
        }
    }
    printf("%s",s);
    return 0;
}