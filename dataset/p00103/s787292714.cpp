#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int outCount=0, base=0, point=0;
        while(outCount < 3){
            char event[8]={0};
            scanf("%s",event);
            if(event[1] == 'I'){
                base <<= 1;
                base |= 1;
                if(base & 8){
                    point++;
                    base ^= 8;
                }
            }else if(event[0] == 'H'){
                int runnerCnt=1;
                while(base > 0){
                    if(base & 1)runnerCnt++;
                    base >>= 1;
                }
                point += runnerCnt;
            }else{
                outCount++;
            }
        }
        printf("%d\n",point);
    }
    return 0;
}