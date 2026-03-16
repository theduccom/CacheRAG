#include <iostream>
#include <cmath>
//#include <file>
using namespace std;

double speed(double time){
    return 9.8*time;
}
double height(double time){
    return 4.9*time*time;
}
double time(double speed){
    return speed/9.8;
}
int floor1(double height1){
    return static_cast<int>((height1+5)/5+0.5);
}

int main (int argc, char const* argv[]){
    double minspeed;
    double reachedTime;
    double heigh;
    
    while(cin >> minspeed){
        reachedTime = time(minspeed);
        heigh = height(reachedTime);
        //cout << floor1(heigh)<< endl;
        for(int i=0;i<100000;i++){
            if(heigh<=5*i-5){
                cout << i << endl;
                break;
            }
        }
    }
    
    return 0;
}

/*
    m/s
*/