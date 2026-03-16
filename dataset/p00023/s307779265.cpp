#include<iostream>
#include<vector>
#include<complex>
using namespace std;

typedef pair<double,double>vec;

double norm(vec v1,vec v2){
    return (v1.first-v2.first)*(v1.first-v2.first)+(v1.second-v2.second)*(v1.second-v2.second);
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        double x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        vec v1=make_pair(x1,y1);
        vec v2=make_pair(x2,y2);
        double dis=norm(v1,v2);
        if(dis>(r1+r2)*(r1+r2))
            cout<<0<<endl;
        else if(dis>(r1-r2)*(r1-r2)&&dis<(r1+r2)*(r1+r2)){
            cout<<1<<endl;
        }
        else if((r1-r2)*(r1-r2) > dis){
            if((r1-r2)>0){
                cout<<2<<endl;
            }
            else if((r1-r2)<0)cout<<-2<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}