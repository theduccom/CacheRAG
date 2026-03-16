#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

#define PI 3.141592653

int main(){
    string A,B;
    int n,Ak,Bk,ans[81];
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<80;j++){
            ans[j]=0;
        }
        
        cin >> A >> B;
        
        if(A==B && A=="0"){
            printf("0\n");
            continue;
        }
        
        Ak=(int)A.size();
        Bk=(int)B.size();
        
        if(Ak>80 || Bk>80){
            puts("overflow");
            continue;
        }
        
        for(int j=0;j<max(Ak,Bk);j++){
            if(j<min(Ak,Bk))
                ans[79-j]+=(A[Ak-1-j]-'0')+(B[Bk-1-j]-'0');
            else if(j<Ak)
                ans[79-j]+=A[Ak-1-j]-'0';
            else if(j<Bk)
                ans[79-j]+=B[Bk-1-j]-'0';
            
            if(ans[79-j]>=10){
                if(j==79){
                    break;
                }
                ans[79-j-1]++;
                ans[79-j]-=10;
            }
        }
        
        if(ans[0]>=10){
            puts("overflow");
        }else{
            bool f = false;
            for(int j=0;j<80;j++){
                if(ans[j]>0 || f){
                    printf("%1d",ans[j]);
                    f = true;
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}