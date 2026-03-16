/*
    2014.07.04 1259~1310
    C language Lecture week ∞
*/

#include <stdio.h>
#include <string.h>

char classify ( int score_math, int score_eng, int score_jpn );

int main (void) {
    
    int score_math = -1;
    int score_eng = -1;
    int score_jpn = -1;
    
    int max = -1;
    
    while (1) {
        
        scanf ( "%d", &max );
        
        if ( max == 0 ) {
            break;
        }
        
        for ( int cnt = 0; cnt < max; cnt ++ ) {
            scanf ( "%d", &score_math );
            scanf ( "%d", &score_eng );
            scanf ( "%d", &score_jpn );
            printf ( "%c\n", classify ( score_math, score_eng, score_jpn ) );
        }
    
    }
    
    return 0;
    
}

char classify ( int score_math, int score_eng, int score_jpn ) {
    char out;
    int score_me = ( score_math + score_eng );
    int score_mej = ( score_math + score_eng + score_jpn );
    
    if ( score_math == 100 || score_eng == 100 || score_jpn == 100 ) {
        out = 'A';
    } else if ( score_me >= 180 ) {
        out = 'A';
    } else if ( score_mej >= 240 ) {
        out = 'A';
    } else if ( score_mej >= 210 ) {
        out = 'B';
    } else if ( score_mej >= 150 && ( score_math >= 80 || score_eng >= 80 ) ) {
        out = 'B';
    } else {
        out = 'C';
    }
    
    return out;
}