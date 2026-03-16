#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while( cin >> s ) {
        for( auto it=s.cbegin(); it<s.cend(); ++it ) {
            if ( *it != '@' ) {
                cout << *it;
            } else {
                int const times = *(++it) - '0';
                char const t = *(++it);
                for( int i=0; i<times; ++i )
                    cout << t;
            }
        }
        cout << endl;
    }
}