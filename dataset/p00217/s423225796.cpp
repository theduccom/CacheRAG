#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        int N;
        cin>>N;
        if(N==0)break;
        int maxnum=0,maxatai=0;
        for(int i=0;i<N;i++){
            int a,b,c;
            cin>>a>>b>>c;
            if(maxatai<b+c){
                maxnum=a;
                maxatai=b+c;
            }
        }
        cout<<maxnum<<" "<<maxatai<<endl;
    }
    return 0;
}