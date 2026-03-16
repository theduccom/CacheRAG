#include<iostream>
using namespace std;

int main()
{
    int n;

    while( cin >> n )
    {
        if( n == 0 )
            break;
        
        int sum2 = 0, sum5 = 0;
        
        for( int i = n; i > 0; i-- )
        {
            int n2 = i, n5 = i;
            while( 1 )
            {
                if( n2 % 2 == 0 )
                {
                    sum2++;
                    n2 /= 2;
                }
                else
                    break;
            }
            while( 1 )
            {
                if( n5 % 5 == 0 )
                {
                    sum5++;
                    n5 /= 5;
                }
                else
                    break;
            }
        }
        if( sum2 < sum5 )
            cout << sum2 << endl;
        else
            cout << sum5 << endl;
    }
    return 0;
}
