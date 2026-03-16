#include<iostream>
#include<string>
using namespace std;

template< class T >
void exchange( T &a, T &b )
{
    T c  = a;
    a = b;
    b = c;
}

int main()
{
    string str, words[100];
    int p, d[100];

    int i = 0;
    while( cin >> str )
    {
        cin >> p;
        words[i] = str;
        d[i] = p;
        i++;
    }

    for( int j = 0; j < i - 1; j++ )
        for( int k = j + 1; k < i; k++ )
            if( words[j] > words[k] )
            {
                exchange( words[j], words[k] );
                exchange( d[j], d[k] );
            }

    for( int j = 0; j < i - 1; j++ )
        for( int k = j + 1; k < i; k++ )
            if( words[j] == words[k] && d[j] > d[k] )
                exchange( d[j], d[k] );

    cout << words[0] << endl << d[0];
    for( int j = 1; j < i; j++ )
        if( words[j-1] == words[j] )
            cout << " " << d[j];
        else
            cout << endl << words[j] << endl << d[j];
    
    cout << endl;

    return 0;
}
