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

const double EPS=1e-12;
const double INF=1e12;

typedef complex<double>Point;

namespace std{
    bool operator<(const Point &P,const Point &Q){
        return real(P)!=real(Q)?real(P)<real(Q):imag(P)<imag(Q);
    }
}

double dot(const Point &P,const Point &Q){
    return real(P)*real(Q)+imag(P)*imag(Q);
}

double cross(const Point &P,const Point &Q){
    return real(P)*imag(Q)-real(Q)*imag(P);
}

struct Line{
    Point a,b;
    Line(Point P,Point Q){
        a=P;b=Q;
    }
    Line(){}
};

struct Segment{
    Point a,b;
    Segment(Point P,Point Q){
        a=P;b=Q;
    }
    Segment(){}
};

struct Circle{
    Point c;
    double r;
    Circle(Point P,double l){
        c=P;r=l;
    }
};

typedef vector<Point>Polygon;

int ccw(Point A,Point B,Point C){
    B-=A;C-=A;
    if(cross(B,C)>0)return 1; //ccw
    if(cross(B,C)<0)return -1; //cw
    if(dot(B,C)<0)return 2; //c-b-a
    if(norm(B)<norm(C))return -2; //a-b-c
    return 0; //a-c-b
}
inline bool Parallelism(const Line &L,const Line &M){
    return fabs(cross(L.a-L.b,M.a-M.b))<EPS;
}

inline bool Orthogonal(const Line &L,const Line &M){
    return fabs(dot(L.a-L.b,M.a-M.b))<EPS;
}

inline bool intersect(const Line &L,const Line &M){
    return cross(L.a-L.b,M.a-M.b)>EPS ||cross(L.a-L.b,M.a-M.b)<-EPS;
}

inline bool intersect(const Line &L,const Segment &S){
    return cross(L.b-L.a,S.a-L.a)*cross(L.b-L.a,S.b-L.a)<-EPS;
}

inline bool intersect(const Line &L,const Point &P){
    return abs(ccw(L.a,L.b,P))!=1;
}

inline bool intersect(const Segment &S, const Segment &T){
    return ccw(S.a,S.b,T.a)*ccw(S.a,S.b,T.b)<=0&&
        ccw(T.a,T.b,S.a)*ccw(T.a,T.b,S.b) <= 0;
}

inline bool intersect(const Segment &S,const Point &P){
    return ccw(S.a,S.b,P)==0;
}

inline bool intersect(const Circle &C,const Point &P){
    return abs(C.c-P)<=C.r+EPS;
}

inline bool intersect(const Circle &C,const Circle &D){
    return abs(C.c-D.c)<=C.r+D.r&&abs(C.c-D.c)>=fabs(C.r-D.r);
}

inline Point crossPoint(const Line &L,const Line &M){

}
double areaTriangle(Point A,Point B,Point C){
    B-=A;C-=A;
    return fabs(cross(B,C))*0.5;
}

double areaPolygon(Polygon &g){
    const int Sz=g.size();
    if(Sz<3)return 0;
    if(Sz==3)return areaTriangle(g[0],g[1],g[2]);

    double res=cross(g[Sz-1],g[0]);
    for(int i=1;i<Sz;i++)res+=cross(g[i-1],g[i]);

    return fabs(res)*0.5;
}



int main(){
    Polygon g;
    double x,y;
    while(scanf("%lf,%lf",&x,&y)!=EOF){
        g.push_back(Point(x,y));
    }
    printf("%f\n",areaPolygon(g));
    return 0;
}