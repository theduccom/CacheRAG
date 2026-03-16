#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n,b[8],k=0,temp,a[8],ans;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ans=0;
        scanf("%d",&temp);
        for(int j=0;j<8;j++){
            a[j]=temp%10;
            temp/=10;
        }
        sort(a,a+8);
        for(int j=0;j<8;j++){
            b[7-j]=a[j]-a[7-j]-k;
            k=0;
            if(b[7-j]<0){
                b[7-j]+=10;
                k=1;
            }
        }
        for(int j=0;j<8;j++){
            ans+=b[j];
            ans*=10;
        }
        ans/=10;
        printf("%d\n",ans);
    }
}