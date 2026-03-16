#include <iostream>

using namespace std;

int main()
{
        double max = 0, min = 0;
        double tmp;

        while ( cin >> tmp )
        {
                if ( min == 0 )
                {
                        min = tmp;
                        max = tmp;
                }
                else if ( tmp > max )
                {
                        max = tmp;
                }
                else if ( tmp < min )
                {
                        min = tmp;
                }
        }

        cout << max - min << endl;

        return 0;
}

