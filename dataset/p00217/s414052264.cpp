
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,p[10000],d[10000],e[10000],c[10000],max=0,num=0,i;
    while(cin>>n){
        if(n==0)break;
        for(i=0;i<n;i++){
            cin>>p[i]>>d[i]>>e[i];
        }
        for(i=0;i<n;i++){
            c[i]=d[i]+e[i];
        }
        for(i=0;i<n;i++){
            if(max<=c[i]){
                max=c[i];
                num=i;
            }
        }
        cout<<p[num]<<" "<<max<<endl;
        max=0;
    }
      return 0;
}