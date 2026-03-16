#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename It>
bool is_palindrome( It const& b, It const& e )
{
    if ( *b != *e )
        return false;
    if ( distance( b, e ) <= 1 )
        return true;
    return is_palindrome( b+1, e-1 );
}

int main()
{
    string s;
    size_t sum = 0;
    while( cin >> s ) {
        if ( is_palindrome( s.begin(), s.end() - 1 ) )
            ++sum;
    }
    cout << sum << endl;
}