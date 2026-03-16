#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
    int card[5];
    
    while (scanf("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4]) != EOF){
        
        stable_sort(card, card + 5);
        
        if (((card[0] == card[1]) && (card[1] == card[2]) && (card[2] == card[3])) || ((card[1] == card[2]) && (card[2] == card[3]) && (card[3] == card[4]))){
            printf("four card\n");
        }
        else if (((card[0] == card[1]) && (card[2] == card[3]) && (card[3] == card[4])) || ( (card[4] == card[3]) && (card[0] == card[1]) && (card[1] == card[2]) )){
            printf("full house\n");
        }
        else if (((card[0] == 1) && (card[1] == 10) && (card[2] == 11) && (card[3] == 12) && (card[4] == 13)) || ((card[0] == card[1] - 1) && (card[1] == card[2] - 1) && (card[2] == card[3] - 1) && (card[3] == card[4] - 1))){
            printf("straight\n");
        }
        else if ( ((card[0] == card[1]) && (card[1] == card[2])) || ((card[1] == card[2]) && (card[2] == card[3])) || ((card[2] == card[3]) && (card[3] == card[4])) ){
            printf("three card\n");
        }
        else if (((card[0] == card[1]) && (card[2] == card[3])) || ((card[1] == card[2]) && (card[3] == card[4])) || ((card[0] == card[1]) && (card[3] == card[4]))){
            printf("two pair\n");
        }
        else if ((card[0] == card[1]) || (card[1] == card[2]) || (card[2] == card[3]) || (card[3] == card[4])){
            printf("one pair\n");
        }
        else {
            printf("null\n");
        }
    }
    
    return (0);
}