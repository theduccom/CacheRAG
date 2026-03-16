#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>
#include<math.h>

using namespace std;

#define	PI 3.141592

int main(void)
{
  int a=1, b=1;
  double n=0.0;
  double e=0.0;
  int r=90;

  while(a!=0 || b!=0)
    {
      scanf("%d,%d", &a, &b);
      n+=a*sin(r*PI/180.0);
      e+=a*cos(r*PI/180.0);
      r-=b;
      r%=360;
    }

  cout<<(int)e<<endl<<(int)n<<endl;

}