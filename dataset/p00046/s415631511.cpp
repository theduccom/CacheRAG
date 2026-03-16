#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i=0;
    double a[30000]={0};
    while(cin>>a[i]){
        i++;
    }
    sort(a,a+i);
    cout<<a[i-1]-a[0]<<endl;
    return 0;
}