#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void){
    double height;
    double min = 1000000;
    double max = 0;
    
    while(cin >> height){
        if(height > max) max = height;
        if(height < min) min = height;
    }

    cout << max - min << endl;
}
