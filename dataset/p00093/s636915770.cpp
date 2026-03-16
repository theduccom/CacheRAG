#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    int f = 0;
    int ans[2000] = {0};
    int cnt = 0;
    int j = 0;
    for(;;){
        cin >> a >> b;
        if(a == 0 && b == 0)break;
        else if(f == 1) printf("\n");
        for(int i = a; i <= b; i++){
            if(i%4 == 0 && i%100 != 0){cnt++;ans[j] = i;j++;}
            else if(i%400 == 0){cnt++;ans[j] = i;j++;}
        }
        if(cnt == 0)printf("NA\n");
        else {
            for(int i = 0;i < j; i++)printf("%d\n",ans[i]);
            j = 0;
            cnt = 0;
        }
        f = 1;
    }
    return 0;
}