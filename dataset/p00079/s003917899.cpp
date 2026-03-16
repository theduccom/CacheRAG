#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
typedef pair<double,double> P;
double po(double d){return d*d;}
int main(){
    vector<P> ps;
    double x,y;
    while(scanf("%lf,%lf\n",&x,&y)!=-1){
        ps.push_back(make_pair(x,y));
    }
    double s=0;
    for(int i=1;i+1<ps.size();i++){
        double x[3],y[3];
        x[0]=ps[0].first;
        x[1]=ps[i].first;
        x[2]=ps[i+1].first;
        y[0]=ps[0].second;
        y[1]=ps[i].second;
        y[2]=ps[i+1].second;
        double a=sqrt(po(x[0]-x[1])+po(y[0]-y[1])),b=sqrt(po(x[1]-x[2])+po(y[1]-y[2])),c=sqrt(po(x[2]-x[0])+po(y[2]-y[0])),z=(a+b+c)/2;
        s+=sqrt(z*(z-a)*(z-b)*(z-c));
    }
    printf("%lf\n",s);
}