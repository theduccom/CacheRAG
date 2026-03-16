#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n){
        int p[2],point[2]={};
        cin>>p[0]>>point[0]>>point[1];
        point[0]+=point[1];
        for(int i=0;i<n-1;i++){
            point[1]=0;
            cin>>p[1];
            for(int j=0,num;j<2;j++){
                cin>>num;
                point[1]+=num;
            }
            if(point[0]<point[1]){
                p[0]=p[1];
                point[0]=point[1];
            }
        }
        cout<<p[0]<<" "<<point[0]<<endl;
    }
}