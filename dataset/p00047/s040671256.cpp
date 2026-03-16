#include <cstdio>
#include <utility>

using namespace std;

int a = 1, b = 0, c = 0;

int main()
{
    char c1, c2;
    while (scanf("%c,%c\n", &c1, &c2) != EOF)
    {
        if( (c1 == 'A' && c2 == 'B') || (c1 == 'B' && c2 == 'A') )
        {
            swap( a, b );
        }
        if( (c1 == 'C' && c2 == 'A')||(c1 == 'A' && c2 == 'C') )
        {
            swap( a, c );
        }
        if ((c1 == 'B' && c2 == 'C') || (c1 == 'C' && c2 == 'B'))
        {
            swap( b, c );
        }
    }
   
    if(a) printf( "%c\n", 'A' );
    if(b) printf( "%c\n", 'B' );
    if(c) printf( "%c\n", 'C' );
    return 0;
}
