#include<iostream>
#include<vector>
#include<string>
using namespace std;

int calculate( int a, int b, char c )
{
    if( c == '+' )
        return a + b;
    else if( c == '-' )
        return a - b;
    else if( c == '*' )
        return a * b;
    else if( c == '/' )
        return a / b;
    else
        return a;
}

int getMax( int a, int b )
{
    return a > b ? a : b;
}

int main()
{
    int n;
    string s;
    vector<int> d, p;
    vector<char> c;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> s;

        int a = 0, b = 0;
        for( int j = 0; j < s.size(); j++ )
        {
            if( '0' <= s[j] && s[j] <= '9' )
                a = a * 10 + s[j] - '0';
            else if( '0' <= s[j-1] && s[j-1] <= '9' )
            {
                d.push_back(a);
                a = 0;
            }
            else;
            
            if( s[j] == '+' || s[j] == '-' )
            {
                c.push_back(s[j]);
                p.push_back(b+1);
            }
            else if( s[j] == '*' || s[j] == '/' )
            {
                c.push_back(s[j]);
                p.push_back(b+2);
            }
            else if( s[j] == '(' )
                b += 10;
            else if( s[j] == ')' )
                b -= 10;
            else;
        }

        int cnt = c.size();
        while( cnt-- )
        {    
            int m = 0;
            for( int j = 0; j < p.size(); j++ )
                m = max( m, p[j] );

            for( int j = 0; j < p.size(); j++ )
                if( p[j] == m )
                {
                    p[j] = 0;
                    d[j] = calculate( d[j], d[j+1], c[j] );
                    for( int k = j; k < c.size() - 1; k++ )
                    {
                        c[k] = c[k+1];
                        p[k] = p[k+1];
                        p[k+1] = 0;
                    }
                    for( int k = j + 1; k < d.size() - 1; k++ )
                        d[k] = d[k+1];
                    break;
                }
        }
        cout << d[0] << endl;
        d.clear();
        c.clear();
        p.clear();
    }
    return 0;
}
