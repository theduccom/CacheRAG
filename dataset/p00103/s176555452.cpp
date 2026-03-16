#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int score[n];
    for( int i = 0; i < n; i++ )
        score[i] = 0;
    
    int out = 0, inning = 0;
    bitset<4> b = 0;
    string event;

    while( cin >> event )
    {
        if( event == "HIT" )            //ヒット
        {
            b <<= 1;                    // <<=1は1ビット左にシフト
            b[0] = 1;                   // b[0]は000'0'を示す。b[1]は00'0'0を示す。

            if( b[3] == 1 )
            {
                score[inning]++;
                b[3] = 0;
            }
        }
        else if( event == "OUT" )       //アウト
        {
            out++;
            if( out == 3 )
            {
                inning++;
                out = 0;
                b = 0;
            }
        }
        else                            //ホームラン
        {
            score[inning] += b.count() + 1;
            b = 0;
        }
    }

    for( int i = 0; i < n; i++ )
        cout << score[i] << endl;

    return 0;
}
