#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
bool us[1000010]={false};
bool p[1000010] = {0};
int main(){
    /*Eratosthenes*/
    p[2] = true;
    for(int i = 0; i <= 1000010; i+=2){
        us[i] = true;
    }
     
    int cnt = 1;
    for(int i = 3; i <= 1000010; i+=2){
        int q = 0;
        if(us[i] == true)continue;
        else if(us[i] == false){
            p[i] = true;
            us[i] = true;
            q = i;
            for(int j = q+q; j <= 1000010; j += q){
                us[j] = true;
            }
        }
    }
     
    int n;
    while(scanf("%d",&n),n){
        int x = 0;
        for(int i = 2; i <= n/2; i++){
            if(p[i] && p[n-i]){
                x++;
            }
        }
        printf("%d\n",x);
    }
    return 0;
}