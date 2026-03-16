#include<bits/stdc++.h>
using namespace std;

typedef struct{
  double x,y,r;
}Circle_t;


inline double dist(Circle_t a, Circle_t b){
  return sqrt( (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) );
}

int main(){

  int n;
  Circle_t a,b;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;

    if( a.r + b.r < dist(a,b) ) cout << 0 << endl;

    else if(a.r-b.r > dist(a,b)) cout << 2 << endl;

    else if(b.r-a.r > dist(a,b)) cout << -2 << endl;

    else cout << 1 << endl;

  }

  return 0;
}