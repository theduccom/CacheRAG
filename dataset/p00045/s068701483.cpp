#include<cstdio>
using namespace std;

int main() {
  int sum=0,count=0,tsum=0,t,s;
  double avg;
  while(~scanf("%d,%d", &t, &s)) {
    sum += t*s;
    tsum += s;
    count++;
  }
  avg = (double)tsum/count;
  avg += 0.5;
  printf("%d\n%.0f\n", sum, avg);
}