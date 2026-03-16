//
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;i++)
#define scanInt(i) scanf("%d", &i)

using namespace std;

class xy_t{
public:
  double x;
  double y;

  void disp(){
	  cout << "x " << x << " y " << y << endl;
  }
};

int main(){
	xy_t P[110];
	int N = 0;
	double mx, my;
	  while(scanf("%lf,%lf", &mx, &my) != EOF){
	    P[N].x = mx;
	    P[N].y = my;
		// P[N].disp();
		N++;
	  }


	  double sum = 0.0;
	  for(int i=0; i+2<N; i++){
	    xy_t a=P[0], b=P[i+1], c=P[i+2];
	    sum += 0.5*abs((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x));
	  }
	  printf("%.8lf\n", std::abs(sum));

	return 0;
}