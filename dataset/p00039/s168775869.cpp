#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string str;

    while( cin >> str )
    {
        int x[str.size()];
        for( int i = 0; i < str.size(); i++ )
        {
            if( str[i] == 'M' )
                x[i] = 1000;
            else if( str[i] == 'D' )
                x[i] = 500;
            else if( str[i] == 'C' )
                x[i] = 100;
            else if( str[i] == 'L' )
                x[i] = 50;
            else if( str[i] == 'X' )
                x[i] = 10;
            else if( str[i] == 'V' )
                x[i] = 5;
            else
                x[i] = 1;
        }

        stack<int> s;
        s.push(x[0]);
        for( int i = 1; i < str.size(); i++ )
        {
            if( s.top() >= x[i] )
            {
                s.push(x[i]);        
            }
            else
            {
                int m = 0;
                while( s.top() < x[i] )
                {
                    m += s.top();
                    s.pop();
                    if( s.empty() == true )     //空なら抜ける。
                        break;
                }
                s.push( x[i] - m );
            }
        }
        int sum = 0;
        while( s.empty() == false )
        {
            sum += s.top();
            s.pop();
        }
        cout << sum << endl;
    }


    return 0;
}
