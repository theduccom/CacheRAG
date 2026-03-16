#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class Position {
  private:
    double x;
    double y;
    double angle;
    double radian;
  public:
    Position();
    void Rotate(double);
    void Move(double);
    double GetX();
    double GetY();
};

Position::Position() {
  x = 0;
  y = 0;
  angle = 90;
  radian = angle / 180.0 * M_PI;
}

void Position::Rotate(double d_angle) {
  angle += d_angle;
  radian = angle / 180.0 * M_PI;
}

void Position::Move(double d_distance) {
  x += d_distance * cos(radian);
  y += d_distance * sin(radian);
}

double Position::GetX() {
  return x;
}

double Position::GetY() {
  return y;
}

int main() {
  Position pos;
  double distance, angle;

  while (1) {
    scanf("%lf,%lf", &distance, &angle);
    if (distance == 0 && angle == 0)
      break;
    angle *= -1;
    pos.Move(distance);
    pos.Rotate(angle);
  }

  cout << (int)pos.GetX() << endl;
  cout << (int)pos.GetY() << endl;
  
  return 0;
}