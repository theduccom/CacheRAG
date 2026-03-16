#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    double a[100000],max=-10000,min=100000000,b;
    int i=0;
    while(cin>>a[i]){
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]>max){
            max=a[j];
        }
        if(a[j]<min){
            min=a[j];
        }
    }double ans=max-min;
    printf("%.2lf",ans);
    cout<<endl;
    return 0;
}