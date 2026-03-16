#include<iostream>
#include<cmath>
using namespace std;

bool Judge_Prime_Number( int x )
{
    for( int i = 2; i <= sqrt(x); i++ )
    {
        if( x % i == 0 )
            return false;
    }
    return true;
}

int main()
{
    int n;

    while( cin >> n )                               //データセットであることを忘れていた。
    {
        if( n == 0 )
            break;

        int i = 0;

        int sum = 0, p = 2;
        while( i != n )
        {
            if( Judge_Prime_Number(p) == true )
            {
                sum += p;
                i++;
            }
            p++;
        }
       cout << sum << endl;
    }

    return 0;
}
