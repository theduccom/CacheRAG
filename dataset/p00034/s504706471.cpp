#include<iostream>
using namespace std;

int main(){
    int dis[10];
    char c;
    int v1,v2;
    while(cin>>dis[0]){
        int m=100000;
        for(int i=1;i<10;i++)
            cin>>c>>dis[i];
        int to=0;
        for(int i=0;i<10;i++){
            to+=dis[i];
            m=min(m,dis[i]);
        }
        cin>>c>>v1>>c>>v2;
        double ma=max(v1,v2);
        double x=m/ma;
        x=x/2;
        double tot=0;
        for(double i=0;i<1.0*to/(v2+v1)+1;i+=x){
            tot+=(v1+v2)*x;
            if(tot>=to){
                i=tot/(v1+v2);
                double cam=v1*i;
                for(int i=0;i<10;i++){
                    if(cam<=dis[i]){
                        cout<<i+1<<endl;
                        goto next;
                    }
                    dis[i+1]+=dis[i];
                }
            }
        }
    next:;
    }
    return 0;
}