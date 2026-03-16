#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

#define PI 3.1415926535897932
// #54797
int main(){
    int len,flg;
    char s[84];
    while (fgets(s,84,stdin)!=NULL) {
        len=strlen(s)-1;
        flg=1;

        while (flg) {
            for (int i=0;i<len;i++) {
                if (islower(s[i])) {
                    s[i]=(s[i]-'a'+1)%26+'a';
                }
            }
            for (int i=0;i<len;i++) {
                if (!strncmp(&s[i],"the",3) || !strncmp(&s[i],"this",4) || !strncmp(&s[i],"that",4)) {
                    flg=0;
                    break;
                }
            }
        }
        printf("%s",s);
    }
    return 0;
}