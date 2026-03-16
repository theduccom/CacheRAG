#include<cstdio>
#include<cmath>
using namespace std;
typedef double D;

D len(D ax, D ay, D bx, D by){
  return sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );
}

D tri_area(D a, D b, D c){
  D s = (a+b+c)/2;
  return sqrt( s*(s-a)*(s-b)*(s-c) );
}

int main(){
  int n;
  D x[20], y[20];
  for(n=0;scanf("%lf,%lf",&x[n],&y[n])!=EOF;n++);

  D res = 0;
  for(int i=1;i<n-1;i++){
    res += tri_area(len(x[0],y[0],x[i],y[i]),
		    len(x[0],y[0],x[i+1],y[i+1]),
		    len(x[i],y[i],x[i+1],y[i+1]) );
  }
  printf("%.9lf\n",res);
}