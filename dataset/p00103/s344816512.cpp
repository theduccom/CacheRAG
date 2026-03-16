#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int n;
    string ju;
    int result[2000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int hit=0,out=0;
        while(1){
            cin>>ju;
            if(ju[0]=='H'&&ju[1]=='I'){
                if(hit<3)
                    hit++;
                else
                    result[i]++;
            }
            else if(ju[1]=='O')
                result[i]+=(hit+1),hit=0;
            else
                out++;
            if(out==3)
                break;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",result[i]);
    return 0;
}