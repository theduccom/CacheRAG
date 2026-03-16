

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    double v;
    while(cin >> v){
        double t = v / 9.8;
        double y = 4.9 * t * t;
        int n = 1;
        while(true){
        if (5 * n - 5 >= y){
            cout << n << endl;
            break;
        } else {
            n++;
        }
        }
    }
 
    return 0;
}