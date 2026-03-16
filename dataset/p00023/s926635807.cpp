#include <iostream>
#include<cmath>

using namespace std;

void Solution()
{
    int n;
    
    cin>>n;
    
    while(n--)
    {
        double xa, ya, ra;
        double xb, yb, rb;
        double d;
        
        cin>>xa>>ya>>ra>>xb>>yb>>rb;
        
        d = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)); // distance of o1 and o2
        
        if (d > ra + rb)
        {
            cout << "0" << endl;
        }
        else if (d >= abs(ra - rb)) // && ra + rb >= d
        {
            cout << "1" << endl;
        }
        else if (ra > rb) // d < ra - rb
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "-2" << endl;
        }
    }
}

int main()
{
    Solution();
    return 0;
}