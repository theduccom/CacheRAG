#include<iostream>
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

using namespace std;

int main(){
    double x = 0, y = 0, direction = 90;
    int distance, degree;

    while (true)
    {
        scanf("%d,%d", &distance, &degree);

        if (distance == 0 && degree == 0){
            break;
        }

        x += distance*cos(direction / 180 * M_PI);
        y += distance*sin(direction / 180 * M_PI);

        direction -= degree;

    }

    cout << (int)x<<endl << (int)y << endl;

    scanf("%d,%d", &distance, &degree);


    return 0;
}