#include <iostream>

using namespace std;
/*
 * memo!!
 * "while" is less memory than "for".
 */
int main()
{
    int i = 1;
    while(i<=9)
    {
        int j = 1;
        while(j<=9)
        {
            cout << i << "x" << j  << "=" << i*j << endl;
            j++;
        }
        i++;
    }
    return 0;
}