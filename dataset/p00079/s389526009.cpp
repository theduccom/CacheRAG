#include <iostream>

typedef struct {
    double x;
    double y;
} point;

double calc_s(point p[], int length);
double calc_s_triangle(point p1, point p2, point p3);
double calc_s_triangle(point p1, point p2);

int main()
{
    point p[20];
    int number_point = 0;
    double px,py;
    while (scanf("%lf,%lf", &px, &py) != EOF) {
        p[number_point].x = px;
        p[number_point].y = py;
        number_point ++;
    }
    std::cout << calc_s(p, number_point) << std::endl;
    return 0;
}

double calc_s(point p[], int length)
{
    double area = 0;
    for (int i = 1; i < length - 1; i++) {
        area += calc_s_triangle(p[0], p[i], p[i+1]);
    }
    return area;
}

double calc_s_triangle(point p1, point p2, point p3)
{
    //p3???????????????????§????
    p1.x -= p3.x;
    p1.y -= p3.y;
    p2.x -= p3.x;
    p2.y -= p3.y;
    return calc_s_triangle(p1, p2);
}

double calc_s_triangle(point p1, point p2) {
    double s = (p1.x * p2.y - p1.y * p2.x) / 2;
    if (s < 0) {
        s *= -1;
    }
    return s;
}