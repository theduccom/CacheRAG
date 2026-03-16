/*
    2014.07.04 1230~1243
    C language Lecture week ∞
*/

#include <stdio.h>

int leap_chk ( int year );

int main (void) {
    
    int init;
    int last;
    
    int rcode = 0;
    
    int count;
    
    while (1) {
        
        count = 0;
        
        scanf ( "%d", &init );
        scanf ( "%d", &last );
        
        if ( init == 0 && last == 0 ) {
            break;
        }
        
        if ( rcode == 0 ) {
            rcode = 1;
        } else {
            printf ( "\n" );
        }
        
        for ( int ly = init; ly <= last; ly ++ ) {
            if ( leap_chk ( ly ) ) {
                printf ( "%d\n", ly );
                count ++;
            }
        }
        
        if ( count == 0 ) {
            printf ( "NA\n" );
        }
        
    }
    
    return 0;
    
}

int leap_chk ( int year ) {
    
    if ( year % 4 == 0 ) {
        if ( year % 100 == 0 ) {
            if ( year % 400 == 0 ) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
    
}