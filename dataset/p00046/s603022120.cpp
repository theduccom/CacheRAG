#include <iostream>

using namespace std;

int main(){    
        double min = 10000000;
        double max = 0;
        double in; 
        while(cin >> in){
                min = min > in ? in: min;
                max = max < in ? in: max;
        }   
        cout << (max-min) << endl;
}