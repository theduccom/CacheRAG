#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dis[11],up,down,sum;
    char s;
    while(cin>>dis[1]>>s){
        sum=dis[1];
        for(int i=2;i<=10;i++){
                cin>>dis[i]>>s;
                sum+=dis[i];
        }
        cin>>up>>s>>down;
        double sec,spead=up+down;
        sec=(sum/spead)*up;
       // cout<<sec<<endl;
        for(int i=1;i<11;i++){
            sec-=dis[i];
            if(sec<=0){
                cout<<i<<endl;
                break;
            }
        }
    }
}