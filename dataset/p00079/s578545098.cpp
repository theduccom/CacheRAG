#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

struct COORDINATE{
  double x;
  double y;
};

double CalcurateArea(COORDINATE, COORDINATE, COORDINATE);
double CalcurateLength(COORDINATE, COORDINATE);

int main(){
  int i;
  double x, y, s;
  char c;
  COORDINATE onedata;
  vector<COORDINATE> data;

  while(cin >> x >> c >> y){
    onedata.x = x;
    onedata.y = y;
    data.push_back(onedata);
  }

  for(i=1, s=0; i<data.size()-1; ++i)
    s += CalcurateArea(data[0], data[i], data[i+1]);

  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(6);
  cout << s << endl;

  return 0;
}

double CalcurateArea(COORDINATE A, COORDINATE B, COORDINATE C){
  double a, b, c, z, s;

  a = CalcurateLength(A, B);
  b = CalcurateLength(C, A);
  c = CalcurateLength(B, C);
  z = (a + b + c)/2;
  s = sqrt(z*(z - a)*(z - b)*(z - c));

  return s;
}

double CalcurateLength(COORDINATE A, COORDINATE B){
  double a, b, c;

  a = A.x - B.x;
  b = A.y - B.y;
  c = sqrt(a*a + b*b);

  return c;
}