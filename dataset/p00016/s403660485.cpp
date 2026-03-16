#include <iostream>
#include <cmath>

using namespace std;

void Solution()
{
    int r;
    int degree;
    
    double sum = 0;
    double x = 0;
    double y = 0;
    
    char comma;
    
    while (true)
    {
        cin >> r >> comma >> degree;
        
        if (r==0 && degree==0)
        {
            break;
        }
        
        x += (double)r * sin(M_PI / 180.0 * sum); // when calculate sin, should use radian
        y += (double)r * cos(M_PI / 180.0 * sum); // when calculate cos, should use radian
        
        sum += (double)degree;
    }
    
    cout << (int)x << "\n" << (int)y << endl;
}

int main()
{
    Solution();
    return 0;
}