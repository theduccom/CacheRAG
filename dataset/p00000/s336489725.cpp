#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i = 1;
    int j = 1;

    while (i < 10){
        while (j <= 9){
            cout << i << 'x' << j << '=' << i*j << endl;
            j ++ ;
        }
        if (j == 10){
            j = 1;
            i ++ ;
            }
    }
    return 0;
}