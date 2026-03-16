#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;

typedef vector <int> VI;
typedef vector <char> VC;

string toNums( string s ) {
    string R = "*/+";
    for ( int i = 0; i < 3; ++ i ) {
        replace( s.begin(), s.end(), R[i], ' ' );
    }
    return s;
}

string toOps( string s ) {
    string R = "0123456789-";
    for ( int i = 0; i < 11; ++ i ) {
        replace( s.begin(), s.end(), R[i], ' ' );
    }
    return s;
}

int eval( string expr ) {
    stack <int> S;
    for ( int i = 0; i < (int)expr.size(); ++ i ) {
        if ( expr[i] == '(' ) {
            S.push( i );
        } else if ( expr[i] == ')' ) {
            int left = S.top();
            int right = i;
            string L = expr.substr( 0, left );
            string M = expr.substr( left, right - left + 1 );
            string R = expr.substr( right + 1 );
            ostringstream os;
            os << eval( M.substr( 1, M.size()-2 ) );
            expr = L + os.str() + R;
            i = -1;
            S = stack <int>();
            continue;
        }
    }
    string nums = toNums( expr );
    string ops = toOps( expr );
    VI N;
    int num;
    istringstream is1( nums );
    while ( is1 >> num ) {
        N.push_back( num );
    }
    VC O;
    char op;
    istringstream is2( ops );
    while ( is2 >> op ) {
        O.push_back( op );
    }
    for ( int i = 0; i + 1 < (int)N.size(); ++ i ) {
        int a = N[i], b = N[i+1];
        char c = O[i];
        if ( c == '*' ) {
            N.erase( N.begin() + i );
            char cc = O[i+1];
            O.erase( O.begin() + i );
            N[i] = a * b;
            O[i] = cc;
            i --;
        } else if ( c == '/' ) {
            N.erase( N.begin() + i );
            char cc = O[i+1];
            O.erase( O.begin() + i );
            N[i] = a / b;
            O[i] = cc;
            i --;
        }
    }
    int answer = accumulate( N.begin(), N.end(), 0 );
    return answer;
}

bool isOp( char c ) {
    string O = "+-*/";
    for ( int i = 0; i < 4; ++ i ) {
        if ( c == O[i] ) return true;
    }
    return false;
}

string convert( string s ) {
    for ( int i = 0; i < (int)s.size(); ++ i ) {
        if ( s[i] != '-' ) continue;
        string L = s.substr( 0, i );
        string R = s.substr( i );
        s = L + ( (i>0 && isOp( s[i-1] )) || i == 0 ? " " : "+" ) + R;
        i ++;
    }
    return s;
}

int main() {
    int n;
    while ( cin >> n ) {
        if ( n == 0 ) break;
        for ( int i = 0; i < n; ++ i ) {
            string line;
            cin >> line;
            line = convert( line );
            cout << eval( line.substr( 0, line.size() - 1 ) ) << endl;
        }
    }
    return 0;
}