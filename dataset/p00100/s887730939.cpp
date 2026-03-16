#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main(void){
    int n, id, value, num, buf[4000], bufnum, i, j;
    long long int yen[4000];
    bool f;
    while(1){
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        memset(yen,0ll,sizeof(yen));
        bufnum = 0;
        for(i = 0;i < n;i++){
            scanf("%d%d%d",&id,&value,&num);
            for(j = 0;j < bufnum;j++){
                if(buf[j] == id){
                    break;
                }
            }
            if(j == bufnum){
                buf[bufnum++] = id;
            }
            yen[id - 1] += (long long int)value * num;
        }
        f = true;
        for(i = 0;i < bufnum;i++){
            if(yen[buf[i] - 1] >= 1000000ll){
                printf("%d\n",buf[i]);
                f = false;
            }
        }
        if(f){
            printf("NA\n");
        }
    }
    return 0;
}