#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int p1( string const& expr, int& pos );
int p2( string const& expr, int& pos );
int p3( string const& expr, int& pos );

int p1( string const& expr, int& pos )
{
    int result = p2(expr, pos);
    if ( result == -1 )
        return -1;

    while( expr[pos] == '+' || expr[pos] == '-' ) {
        int const cp = pos;
        ++pos;
        int const a = p2( expr, pos );
        if ( expr[cp] == '+' )
            result += a;
        else
            result -= a;
    }

    return result;
}

int p2( string const& expr, int& pos )
{
    int result = p3(expr, pos);
    if ( result == -1 )
        return -1;

    while( expr[pos] == '*' || expr[pos] == '/' ) {
        int const cp = pos;
        ++pos;
        int const a = p3( expr, pos );
        if ( expr[cp] == '*' )
            result *= a;
        else
            result /= a;
    }

    return result;
}

int p3( string const& expr, int& pos )
{
    if ( expr[pos] >= '0' && expr[pos] <= '9' ) {
        string s;
        do {
            s += expr[pos];
            ++pos;
        } while( pos < expr.size() && expr[pos] >= '0' && expr[pos] <= '9' );
        
        return atoi( s.c_str() );

    } else if ( expr[pos] == '(' ){
        ++pos;
        int const res = p1( expr, pos );
        ++pos; // ')'
        return res;
    }

    return -1;
}



int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for( int iii=0; iii<n; ++iii ) {
        string s;
        getline( cin, s );
//        cout << s << endl;
        int pos = 0;
        cout << p1( s, pos ) << endl;
    }
}