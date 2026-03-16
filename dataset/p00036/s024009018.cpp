#include <iostream>
#include <array>

using namespace std;

char checkData( array< int, 4 > data_i, array< int, 4 > data_j )
{
        int i = 0, j = 0;
        if (
                        data_i[i] + 1 == data_i[i+1] &&
                        data_j[j] == data_j[j+1] &&
                        data_i[i] == data_i[i+2] &&
                        data_j[j] + 1 == data_j[i+2] &&
                        data_i[i] + 1 == data_i[j+3] &&
                        data_j[j] + 1 == data_j[j+3]
           )
        {
                return 'A';
        }
        else if (
                        data_i[i] == data_i[i+1] &&
                        data_j[j] + 1 == data_j[j+1] &&
                        data_i[i] == data_i[i+2] &&
                        data_j[j] + 2 == data_j[j+2] &&
                        data_i[i] == data_i[i+3] &&
                        data_j[j] + 3 == data_j[j+3]
        )
        {
                return 'B';
        }
        else if (
                        data_i[i] + 1 == data_i[i+1] &&
                        data_j[j] == data_j[j+1] &&
                        data_i[i] + 2 == data_i[i+2] &&
                        data_j[j] == data_j[j+2] &&
                        data_i[i] + 3 == data_i[j+3] &&
                        data_j[j] == data_j[j+3]
        )
        {
                return 'C';
        }
        else if (
                        data_i[i] - 1 == data_i[i+1] &&
                        data_j[j] + 1 == data_j[j+1] &&
                        data_i[i] == data_i[i+2] &&
                        data_j[j] + 1 == data_j[j+2] &&
                        data_i[i] - 1 == data_i[i+3] &&
                        data_j[j] + 2 == data_j[j+3]
        )
        {
                return 'D';
        }
        else if (
                        data_i[i] + 1 == data_i[i+1] &&
                        data_j[j] == data_j[j+1] &&
                        data_i[i] + 1 == data_i[i+2] &&
                        data_j[j] + 1 == data_j[j+2] &&
                        data_i[i] + 2 == data_i[i+3] &&
                        data_j[j] + 1 == data_j[j+3]
        )
        {
                return 'E';
        }
        else if (
                        data_i[i] == data_i[i+1] &&
                        data_j[j] + 1 == data_j[j+2] &&
                        data_i[i] + 1 == data_i[i+2] &&
                        data_j[j] + 1 == data_j[j+2] &&
                        data_i[i] + 1 == data_i[i+2] &&
                        data_j[j] + 2 == data_j[j+3]
        )
        {
                return 'F';
        }
        else
        {
                return 'G';
        }


}


int main()
{
        char table[8][8];
        array< int, 4 > data_i;
        array< int, 4 > data_j;
        int tmp = 0, inum = 0, jnum = 0, i, j;

        while ( cin >> table[0] )
        {
                for ( i = 1 ; i < 8 ; i++ )
                {
                        cin >> table[i];
                }
                for ( i = 0 ; i < 8 ; i++ )
                {
                        for ( j = 0 ; j < 8 ; j++ )
                        {
                                if ( table[i][j] == '1' )
                                {
                                        data_i[inum] = i;
                                        data_j[jnum] = j;
                                        inum++;
                                        jnum++;
                                }
                        }
                }
                inum = 0;
                jnum = 0;
                cout << checkData( data_j, data_i ) << endl;
        }
        return 0;
}