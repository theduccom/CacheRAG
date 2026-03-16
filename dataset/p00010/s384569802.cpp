#include<cstdio>
#include<cmath>
#include<utility>
using namespace std;
pair<double,double> solve(double a[6]){
    double x,y;
    if(a[0]==0){
        y=a[2]/a[1];
        x=(a[5]-a[4]*y)/a[3];
    }else if(a[1]==0){
        x=a[2]/a[0];
        y=(a[5]-a[3]*x)/a[4];
    }else if(a[3]==0){
        y=a[5]/a[4];
        x=(a[2]-a[1]*y)/a[0];
    }else if(a[4]==0){
        x=a[5]/a[3];
        y=(a[2]-a[0]*x)/a[1];
    }else{
        y=(a[2]-(a[5]*(a[0]/a[3])))/(a[1]-(a[4]*(a[0]/a[3])));
        x=(a[2]-a[1]*y)/a[0];
    }
    return make_pair(x,y);
}

typedef pair<double,double> V;
int main(){
    int n;
    scanf("%d",&n);
    double x[3],y[3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%lf%lf",&x[j],&y[j]);
        }
        V va=V(x[1]-x[0],y[1]-y[0]),vb(x[2]-x[0],y[2]-y[0]);
        V vlia=V(-va.second,va.first),vlib=V(-vb.second,vb.first),vhalfa=V(va.first/2,va.second/2),vhalfb=V(vb.first/2,vb.second/2);
        double a[6];
        a[0]=vlia.first,a[1]=-vlib.first,a[2]=-(vhalfa.first)+vhalfb.first,a[3]=vlia.second,a[4]=-vlib.second,a[5]=-(vhalfa.second)+vhalfb.second;
        double t=solve(a).first;
        V ans=V(vhalfa.first+t*vlia.first+x[0],vhalfa.second+t*vlia.second+y[0]);
        double r=sqrt((x[0]-ans.first)*(x[0]-ans.first)+(y[0]-ans.second)*(y[0]-ans.second));
        printf("%.3lf %.3lf %.3lf\n",rint(ans.first*1000)/1000.0,rint(ans.second*1000)/1000.0,rint(r*1000)/1000.0);
    }
}