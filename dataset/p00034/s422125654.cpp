#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int a[10],v[2],all;
int main(){
while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&v[0],&v[1])!=EOF){
    all=0;
    int v2=v[0]+v[1];
    for(int i=0;i<10;i++){
        all+=a[i];
    }
    double dis=(double)all*v[0]/v2;
    for(int i=0;i<10;i++){
        dis-=a[i];
        if(dis<=0){
            cout<<i+1<<endl;
            break;
        }
    }
}
return 0;
}