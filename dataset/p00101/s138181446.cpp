#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string str, hosino = "Hoshino";

    cin >> n;
    getline( cin, str );                // cinで残された改行コード回収

    for( int o = 0; o < n; o++ )
    {   
        getline( cin, str );
        if( str.size() >= 7 )
        {
            for( int i = 0; i < str.size() - 6; i++ )
            {
                int k = i, j = 0;
                while( j <= 6 && str[k] == hosino[j] )
                {
                    k++;
                    j++;
                }
                if( j == 7 )
                    str[k-1] = 'a';
            }
        }
        cout << str << endl;
    }

    return 0;
}
