#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    char str[128]={0};
    char check1[64]={0},check2=0;
    int cnt=0;
    while(scanf("%s",str)!=EOF){
        int len;
        bool flg = 0;
        len = strlen(str)/2;
        for(int i = 0;i < len; i++)check1[i] = str[i];
        reverse(str,str+strlen(str));
        for(int i = 0;i < len; i++){
            check2 = str[i];
            if(check1[i] != check2){
                flg = 1;
                break;
            }
        }
        if(flg == 0)cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}