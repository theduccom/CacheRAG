#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double xa;
    double ya;
    double ra;
    double xb;
    double yb;
    double rb;
    
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int ans;
        double dist;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        dist = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
        if(islessequal(dist, ra+rb))
        {
            if(isgreater(ra, dist+rb))
            {
                ans = 2;
            }
            else if(isgreater(rb, dist+ra))
            {
                ans = -2;
            }
            else
            {
                ans = 1;
            }
            
        }
        else
        {
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}

