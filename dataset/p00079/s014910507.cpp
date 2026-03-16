#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<map>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include<functional>
using namespace std;
typedef long long lint;
typedef complex<double>Point;
typedef vector<Point>Polygon;
namespace std{
    bool operator<(const Point &P,const Point &Q){
        return real(P)!=real(Q)?real(P)<real(Q):imag(P)<imag(Q);
    }
}
const double EPS=1e-8;
const double INF=1e12;

struct Line:Polygon{
    Line(const Point &P,const Point &Q){
        push_back(P);push_back(Q);
    }
    Line(){}
};

struct Circle{
    Point P;
    double r;
    Circle(const Point &_P,double _r):P(_P),r(_r){}
    Circle(){}
};

double dot(const Point &P,const Point &Q){
    return real(P)*real(Q)+imag(P)*imag(Q);
}

double cross(const Point &P,const Point &Q){
    return real(P)*imag(Q)-real(Q)*imag(P);
}

int ccw(Point A,Point B,Point C){
    B-=A;C-=A;
    if(cross(B,C)>0)return 1; //???????¨???????
    if(cross(B,C)<0)return -1; //????¨???????
    if(dot(B,C)<0)return 2; //c-b-a
    if(norm(B)<norm(C))return -2; //a-b-c
    return 0; //a-c-b
}

bool inrersectSS(const Line &S,const Line &T){
    Point a=S[0],b=S[1],c=T[0],d=T[1];
    return ccw(a,b,c)*ccw(a,b,d)<=0&&
        ccw(c,d,a)*ccw(c,d,b)<=0;
}

double getPolygonS(Polygon &g){
    double sum=0;
    for(int i=0;i<g.size();i++){
        int a=i,b=(i+1)%g.size();
        sum+=cross(g[a],g[b]);
    }
    sum=abs(sum)*0.5;
    return sum;
}
int main(){
    double x,y;
    Polygon g;
    while(scanf("%lf,%lf",&x,&y)!=EOF)g.push_back(Point(x,y));
    printf("%f\n",getPolygonS(g));


    return 0;
}