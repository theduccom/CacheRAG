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
    int a;

    while( cin >> a )
    {
        int min = a - 1, max = a + 1;

        while( Judge_Prime_Number(min) == false )
            min--;
        while( Judge_Prime_Number(max) == false )
            max++;
        
        cout << min << " " << max << endl;
    }

    return 0;
}
