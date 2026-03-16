#include<iostream>

using namespace std;


struct circle{
  double x,y,r;
};

circle c[2];


bool isIn(circle a, circle b){
  return (b.x+b.r < a.x+a.r && b.y+b.r < a.y+a.r &&
	  b.x-b.r > a.x-a.r && b.y-b.r > a.y-a.r);
}

bool cross(circle a, circle b){
  double diff = (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
  return diff <= (a.r+b.r)*(a.r+b.r);
}
int solve(){

  if(isIn(c[0],c[1])) return 2;
  else if(isIn(c[1],c[0]))return -2;
  else if(cross(c[0],c[1])) return 1;
  else return 0;
}

int main(){

  int n;
  cin >> n;
  while(n--){
    for(int i = 0; i < 2; i++)
      cin >> c[i].x >> c[i].y >> c[i].r;

    cout << solve() << endl;
  }
  return 0;
}