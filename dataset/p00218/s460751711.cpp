#include<cstdio>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n),n){
        int m[10010],e[10010],j[10010];
        char ans[10010] = {0};
        for(int i = 0;i < n; i++){
            scanf("%d%d%d",&m[i],&e[i],&j[i]);
            if(m[i] == 100 || e[i] == 100 || j[i] == 100)ans[i] = 'A';
            else if((m[i]+e[i])/2 >= 90)ans[i] = 'A';
            else if((m[i]+e[i]+j[i])/3 >= 80)ans[i] = 'A';
            else if((m[i]+e[i]+j[i])/3 >= 70)ans[i] = 'B';
            else if((m[i]+e[i]+j[i])/3 >= 50 && e[i] >= 80)ans[i] = 'B';
            else if((m[i]+e[i]+j[i])/3 >= 50 && m[i] >= 80)ans[i] = 'B';
            else ans[i] = 'C';
        }
        for(int i = 0;i < n; i++)printf("%c\n",ans[i]);
    }
    return 0;
}