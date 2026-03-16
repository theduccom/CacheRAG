#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    while(true){
        int d,w,h,n,r[10000],a=0,b=0;
        float c=0;
        cin>>d>>w>>h;
        if(d+w+h==0)break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        a=d;
        if(a>w){
            swap(a,w);
        }
        b=w;
        if(w>h){
            b=h;
        }
        c=a*a+b*b;
        c=sqrt(c);
        for(int i=0;i<n;i++){
            if(2*r[i]>c)cout<<"OK"<<endl;
            else{
                cout<<"NA"<<endl;
            }
        }
    }
}