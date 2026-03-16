#include<iostream>
using namespace std;

void Sort( int* a )
{
    for( int i = 0; i < 4; i++ )
    {
        for( int j = i + 1; j < 5; j++ )
        {
            if( a[i] > a[j] )
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

bool fourCard( int* a )
{
    if( a[0] == a[1] && a[2] == a[3] && a[1] == a[2] || a[1] == a[2] && a[3] == a[4] && a[2] == a[3] )
        return true;
    else
        return false;
}

bool fullHouse( int* a )
{
    if( a[0] == a[1] && a[2] == a[3] && a[3] == a[4] || a[0] == a[1] && a[0] == a[2] && a[3] == a[4] )
        return true;
    else
        return false;
}

bool threeCard( int* a )
{
    if( a[0] != a[1] && a[2] == a[3] && a[3] == a[4] || a[3] != a[4] && a[0] == a[1] && a[0] == a[2] || a[0] != a[4] && a[1] == a[2] && a[2] == a[3] )
        return true;
    else
        return false;
}

bool straight( int* a )
{
    if( a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13 )
        return true;
    for( int i = 0; i < 4; i++ )
        if( a[i+1] - a[i] != 1 )
            return false;
    return true;
}

bool twoPair( int* a )
{
    if( fourCard(a) == false && ( a[0] == a[1] && a[2] == a[3] || a[0] == a[1] && a[3] == a[4] || a[1] == a[2] && a[3] == a[4] ) )
        return true;
    else
        return false;;
}

bool onePair( int * a )
{
    if( twoPair(a) == false && threeCard(a) == false && ( a[0] == a[1] || a[1] == a[2] || a[2] == a[3] || a[3] == a[4] ) )
        return true;
    else
        return false;
}

int main()
{
    int card[5];
    char p;

    while( cin >> card[0] >> p >> card[1] >> p >> card[2] >> p >> card[3] >> p >> card[4] )
    {
        Sort(card);
        if( fullHouse(card) == true )
            cout << "full house" << endl;
        else if( fourCard(card) == true )
            cout << "four card" << endl;
        else if( threeCard(card) == true )
            cout << "three card" << endl;
        else if( twoPair(card) == true )
            cout << "two pair" << endl;
        else if( onePair(card) == true )
            cout << "one pair" << endl;
        else if( straight(card) == true )
            cout << "straight" << endl;
        else
            cout << "null" << endl;
    }

    return 0;
}
