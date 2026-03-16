#include<cstdio>
using namespace std;
int main(){
    char str[10000]={0};
    while(scanf("%s",str) != EOF){
        char ans[10000]={0};
        int x = 0;
        for(int i = 0;str[i] != 0;){
            if(str[i] != '@'){
                ans[x] = str[i];
                x++;
                i++;
            }
            else {
                int q = 0;
                q = str[i+1] - 48;
                for(int j = x;j < q+x; j++){
                    ans[j] = str[i+2];
                }
                i += 3;
                x += q;
            }
        }
        //printf("x = %d\n",x);
        printf("%s\n",ans);
    }
    return 0;
}