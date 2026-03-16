#include <iostream>
#include <algorithm>
using namespace std;

bool isstraight(int c[]);

int main(){
    int card[5];

    while(~scanf("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4])){
        sort(card, card+5);
        int n = 0;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<5; j++){
                if(card[i] == card[j]){
                    n++;
                }
            }
        }

        switch(n){
            case 1:
                cout << "one pair" << endl;
                break;
            case 2:
                cout << "two pair" << endl;
                break;
            case 3:
                cout << "three card" << endl;
                break;
            case 4:
                cout << "full house" << endl;
                break;
            case 6:
                cout << "four card" << endl;
                break;
            case 10:
                cout << "four card" << endl;
                break;
            default:
                if(isstraight(card)){
                    cout << "straight" << endl;
                }else{
                    cout << "null" << endl;
                }
                break;
        }
    }

    return 0;
}

bool isstraight(int c[]){
    for(int i=1; i<9; i++){
        if(c[0]==i && c[1]==i+1 && c[2]==i+2 && c[3]==i+3 && c[4]==i+4){
            return true;
        }
        if(c[0]==1 && c[1]==10 && c[2]==11 && c[3]==12 && c[4]==13){
            return true;
        }
    }
    return false;
}