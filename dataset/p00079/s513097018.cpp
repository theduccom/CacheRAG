#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point{
  double x, y;
};

int main(){
  int n;
  Point P[21];
  int cs = 0;
  while(scanf("%lf,%lf", &P[cs].x, &P[cs].y) != EOF){
    cs++;
  }
  
  double area = 0;
  
  for(int i = 0 ; i < cs-1 ; i++){
    area += P[i].x * P[i+1].y - P[i].y * P[i+1].x;
  }
  area += P[cs-1].x * P[0].y - P[cs-1].y * P[0].x;
  
  printf("%f\n", abs(area)/2);
  return 0;
}