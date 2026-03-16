#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    char str[102];
    int len,f,ans=0;
    while (fgets(str,102,stdin)!=NULL) {
        len=strlen(str)-1;
        f=1;
        for (int i=0;i<len/2;++i) {
            if(str[i]!=str[len-i-1]){
                f=0;
                break;
            }
        }
        if (f) ans++;
    }
    printf("%d\n",ans);
    return 0;
}