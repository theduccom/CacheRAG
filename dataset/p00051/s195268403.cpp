#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int q = 0;q < n; q++){
        int a=0,b=0,ans=0;
        char str[10]={0};
        scanf("%s",str);
        sort(str,str+8);
        for(int i = 7;i >= 0; i--){
            int x = pow(10.0,(double)i);
            a += (str[7-i]-48)*x;
            b += (str[i]-48) * x;
        }
        ans = b - a;
        printf("%d\n",ans);
    }
    return 0;
}