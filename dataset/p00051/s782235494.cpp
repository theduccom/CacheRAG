#include <cstdio>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int n,B,C,s;
    char a[9],b[8],c[8];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",a);
        B=0;
        C=0;
        for(int j=0;j<8;j++){
            b[j]=a[j];
            c[j]=a[j];
        }
        for(int j=0;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(b[j]<=b[k]){
                    swap(b[j],b[k]);
                }
                if(c[j]>=c[k]){
                    swap(c[j],c[k]);
                }
            }
        }
        s=0;
        for(int j=7;j>=0;j--){
            B+=(b[s]-'0')*pow(10,j);
            C+=(c[s]-'0')*pow(10,j);
            s++;
        }
        printf("%d\n",B-C);
    }
    return 0;
}